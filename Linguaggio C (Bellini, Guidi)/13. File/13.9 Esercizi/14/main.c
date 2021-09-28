/* 140.
    Una biblioteca memorizza i libri richiesti in lettura in un file in cui sono riportati nome e cognome del richiedente,
    autore e titolo del libro e il codice dell’argomento compreso fra 1 e 25. Scrivere un programma che crei un tale file e
    memorizzi i dati relativi ad alcuni libri in prestito. Realizzare le funzioni necessarie alla gestione del file e che
    permettano alla fine del mese di stampare: tutti i record del file, il numero totale dei lettori, la lista dei libri che sono
    stati richiesti per ognuno dei 25 argomenti e il loro numero totale, quindi l’argomento con il maggior numero di libri
    richiesti. Successivamente si provi a realizzare una soluzione migliore memorizzando libri, autori e argomenti in file
    distinti, relazionati mediante codici univoci appunto di libro, autore, argomento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LEN 100

void newCustomer (void);

FILE *fp;

int main (int argc, char const *argv[])
{
    int c;      /* carattere in ingresso */
    int i, j;   /* contatori */


    /* menu */
    while (c)
    {
        printf ("0. Uscire\n");
        printf ("1. Nuovo cliente\n");

        c = getchar ();
        getchar ();

        switch (c)
        {
            case '0':
                exit (0);
                break;

            case '1':
                newCustomer ();
                break;
        }
    }

    printf ("\n");
    return 0;
}

void newCustomer ()
{
    char buffer[LEN];       /* buffer */
    char name[LEN];         /* nome richiedente */
    char surname[LEN];      /* cognome richiedente */
    char book[LEN];         /* libro */
    char author[LEN];       /* autore del libro */
    char bookCode[LEN];     /* codice del libro */

    int c;                  /* carattere in ingresso */
    int i, j;               /* contatori */

    time_t currentTime;     /* istanza tempo */

    i = 0;

    time (&currentTime);        
    ctime (&currentTime);


    /* costruzione name */
    printf ("Inserire il nome del richiedente > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';

    /* costruzione surname */
    printf ("Inserire il cognome del richiedente > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        surname[i++] = c;
    surname[i] = '\0';

    /* costruzione book */
    printf ("Inserire il titolo del libro > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        book[i++] = c;
    book[i] = '\0';

    /* costruzione author */
    printf ("Inserire l'autore del libro > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        author[i++] = c;
    author[i] = '\0';

    /* costruzione bookCode */
    printf ("Inserire il codice del libro > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        bookCode[i++] = c;
    bookCode[i] = '\0';

    /* esito */
    /* copia nel file Books.txt */
    fp = fopen ("Books.txt", "a+");
    fprintf (fp, "%s>> \"%s\" da %s %s;\n\n", ctime (&currentTime), book, name, surname);
    fclose (fp);
    printf ("Registrazione effettuata\n");

    /* copia nel file libro.txt */
    strcpy (buffer, book);
    strcat (buffer, ".txt");
    fp = fopen (buffer, "a+");
    fprintf (fp, "%s>> \"%s\" da %s %s con codice [%s];\n\n", ctime (&currentTime), book, name, surname, bookCode);
    fclose (fp);

    /* copia nel file codice.txt */
    strcpy (buffer, bookCode);
    strcat (buffer, ".txt");
    fp = fopen (buffer, "a+");
    fprintf (fp, "%s>> \"%s\" da %s %s con codice [%s];\n\n", ctime (&currentTime), book, name, surname, bookCode);
    fclose (fp);

    /* copia nel file autore.txt */
    strcpy (buffer, author);
    strcat (buffer, ".txt");
    fp = fopen (buffer, "a+");
    fprintf (fp, "%s>> \"%s\" da %s %s con codice [%s];\n\n", ctime (&currentTime), book, name, surname, bookCode);
    fclose (fp);
}
// Marco Fiorillo 28/09/2021
