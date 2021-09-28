/* 139.
    Rispetto al file dell’esercizio precedente scrivere le funzioni per stampare:
    1. 1. la lista (nome e cognome) dei dipendenti che hanno più di 50 anni;
    2. 2. la lista (nome e cognome) dei dipendenti residenti a Viterbo;
    3. 3. il totale dei dipendenti maschi, quello dei dipendenti femmine e il numero complessivo dei dipendenti.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define YEAR 2021
#define LEN 100
#define CITY "viterbo"

void show50 (void);
void showViterbo (void);
void showSex (void);
void new (void);            /* funzione per inserire un nuovo utente */

FILE *fp;               /* file "dipendenti.txt" */

int main (int argc, char const *argv[])
{
    int out;        /* flag */

    out = 0;


    /* display del menu */
    while (!out)
    {
        printf ("\n\n\tMENU\n");            
        printf ("0. Uscire\n");
        printf ("1. Nuovo dipendente\n");
        printf ("2. Lista over 50\n");
        printf ("3. Lista abitanti di Viterbo\n");
        printf ("4. Lista dipendenti e sesso\n");
        printf ("> ");
        out = getchar ();
        getchar ();

        switch (out)
        {
            case '0':
                printf ("Uscita dal programma...\n");
                exit (0);
                break;
            
            case '1':
                printf ("Creazione nuovo dipendente...\n");
                new ();
                out = 0;
                break;

            case '2':
                printf ("Lista dipendenti over 50...\n\n");
                show50 ();
                out = 0;
                break;

            case '3':
                printf ("Lista abitanti Viterbo...\n\n");
                showViterbo ();
                out = 0;
                break;

            case '4':
                printf ("Lista dipendenti e sesso...\n\n");
                showSex ();
                out = 0;
                break;

            default:
                printf ("Input errato\n");
                out = 1;
                break;
        }
    }


    printf ("\n");
    return 0;
}

void new ()
{
    char sex;               /* sesso */
    char name[LEN];         /* nome */
    char surname[LEN];      /* cognome */
    char birthDate[LEN];    /* data di nascita */
    char city[LEN];         /* citta di appartenenza */

    int out;                /* flag */
    int c;                  /* carattere in ingresso */
    int i;                  /* contatore */

    out = i = 0;

    fp = fopen ("dipendenti.txt", "a+");


    /* costruzione di name */
    printf ("Inserire il nome > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';
    
    /* esito */
    fprintf (fp, "%s ", name);

    /* costruzione di surname */
    printf ("Inserire il cognome > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        surname[i++] = c;
    surname[i] = '\0';

    /* esito */
    fprintf (fp, "%s ", surname);

    /* assegnazione di sex */
    printf ("Inserire il sesso (M/F) > ");
    sex = getchar ();
    getchar ();

    /* esito */
    fputc (sex, fp);

    /* costruzione di birthdate */
    printf ("Inserire la data di nascita > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        birthDate[i++] = c;
    birthDate[i] = '\0';

    /* esito */
    fprintf (fp, " %s ", birthDate);

    /* costruzione di city */
    printf ("Inserire la citta' di appartenenza > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        city[i++] = c;
    city[i] = '\0';

    /* esito */
    fprintf (fp, "%s\n", city);

    fflush (fp);
    fclose (fp);


    return ;
}

void show50 (void)
{
    char sex[LEN];               /* sesso */
    char name[LEN];         /* nome */
    char surname[LEN];      /* cognome */
    char birthDate[LEN];    /* data di nascita */
    char city[LEN];         /* citta di appartenenza */

    int i;
    int year;

    fp = fopen ("dipendenti.txt", "a+");


    fseek (fp, 0L, SEEK_SET);

    while (!feof (fp))
    {
        fscanf (fp, "%s %s %s %s %s\n", name, surname, sex, birthDate, city);

        for (i = strlen (birthDate) - 4, year = 0; birthDate[i] != '\0'; i++, year *= 10)
            year += birthDate[i] - '0';
        year /= 10;

        if (YEAR - year > 50)
            printf (">> %s %s %i\n", name, surname, year);
    }

    return ;
}

void showViterbo ()
{
    char name[LEN];
    char surname[LEN];
    char buffer[LEN];
    char city[LEN];

    int i;

    fp = fopen ("dipendenti.txt", "a+");


    fseek (fp, 0L, SEEK_SET);

    while (!feof (fp))
    {
        fscanf (fp, "%s %s %s %s %s\n", name, surname, buffer, buffer, city);

        for (i = 0; i < strlen (city); i++)
            city[i] = tolower (city[i]);

        if (!strcmp (city, CITY))
            printf (">> %s %s %s\n", name, surname, city);
    }

    return ;
}

void showSex ()
{
    char name[LEN];
    char surname[LEN];
    char buffer[LEN];
    char sex[LEN];

    int tot;
    int male;
    int i;

    tot = male = 0;
    fp = fopen ("dipendenti.txt", "a+");


    fseek (fp, 0L, SEEK_SET);

    while (!feof (fp))
    {
        fscanf (fp, "%s %s %s %s %s\n", name, surname, sex, buffer, buffer);
        for (i = 0; i < strlen (sex); i++)
            sex[i] = tolower (sex[i]);
        if (!strcmp (sex, "m")) 
            male++;
        tot++;
    }

    printf ("Dipendendi totali  >> %d\n", tot);
    printf ("Dipendenti maschi  >> %d\n", male);
    printf ("Dipendenti femmine >> %d\n", tot - male);

    return ;
}
// Marco Fiorillo 28/09/2021
