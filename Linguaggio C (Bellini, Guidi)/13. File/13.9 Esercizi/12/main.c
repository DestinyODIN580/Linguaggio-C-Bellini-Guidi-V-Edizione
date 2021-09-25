/* 138.
    Un’azienda vuole memorizzare nel file dipendenti i dati relativi a ogni dipendente. In particolare si vogliono
    archiviare nome, cognome, sesso (M,F), anno di nascita e città di residenza. Scrivere un programma che crei un tale file
    e memorizzi i dati relativi ad alcuni dipendenti.    
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 100

void new (void);    /* funzione per inserire un nuovo utente */

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

    FILE *fp;               /* file "dipendenti.txt" */

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
// Marco Fiorillo 25/09/2021
