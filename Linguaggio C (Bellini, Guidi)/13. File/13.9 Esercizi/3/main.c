/* 129.
    Scrivere un programma che offra tramite menu le funzioni di inserimento, ricerca
    e cancellazione di un archivio studenti.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 100

void newStudent (void);
void searchStudent (void);
void deleteStudent (void);

int main (int argc, char const *argv[])
{   
    char name[LEN];
    char surname[LEN];


    int choise;
    int c;
    int i;

    choise = 1;

    while (choise)
    {
        printf ("\n\t\tMENU\n\n");
        printf ("\t0. Uscire\n");
        printf ("\t1. Nuovo studente\n");
        printf ("\t2. Ricerca studente\n");
        printf ("\t3. Cancellazione studente\n");
        printf ("\n\tOpzione (0-3) > ");
        scanf ("%d", &choise);

        switch (choise)
        {
            case (0):
                printf ("\nProgramma terminato");
                exit (0);
                break;
            
            case (1):
                newStudent ();
                break;
            
            case (2):
                searchStudent ();
                break;
        }


    }


    printf ("\n");
    return 0;
}

void newStudent (void)
{   
    char buffer[LEN];   /* buffer */
        
    int c;              /* carattere in ingresso */
    int i;              /* contatore */

    FILE *fp;           /* puntatore al file */

    i = 0;

    fp = fopen ("studenti.txt", "a+");


    /* inserimento del nome */
    printf ("\n\n# ------------------------------------------------------ #\n");
    printf ("\tCreazione di un nuovo studente nell'archivio\n\n");
    getchar ();
    printf ("Inserire nome > ");
    while ((c = getchar ()) != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';
    fprintf (fp, "%s ", buffer);
            
    /* inserimento del cognome */            
    i = 0;
    printf ("Inserire cognome > ");
    while ((c = getchar ()) != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';
    fprintf (fp, "%s ", buffer);

    /* inserimento della data di nascita */
    i = 0;
    printf ("Inserire data di nascita > ");
    while ((c = getchar ()) != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';
    fprintf (fp, "%s\n", buffer);

    printf ("\n\tStudente inserito\n");
    printf ("# ------------------------------------------------------ #\n");
}

void searchStudent (void)
{
    char name[LEN];
    char fileName[LEN];
    char surname[LEN];
    char fileSurname[LEN];

    int c;
    int i;

    FILE *fp;           /* puntatore al file */

    i = 0;

    fp = fopen ("studenti.txt", "a+");


    getchar ();
    printf ("Inserire nome > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';
            
    /* inserimento del cognome */            
    i = 0;
    printf ("Inserire cognome > ");
    while ((c = getchar ()) != '\n')
        surname[i++] = c;
    surname[i] = '\0';

    fseek (fp, 0L, SEEK_SET);

    fscanf (fp, "%s %s %s\n", fileName, fileSurname, )

        printf ("%s", fileName);
    



}










// 
