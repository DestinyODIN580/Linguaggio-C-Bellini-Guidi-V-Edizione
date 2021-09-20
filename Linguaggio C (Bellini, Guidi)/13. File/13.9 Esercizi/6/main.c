/* 132.
    Scrivere un programma che permetta di gestire una rubrica telefonica
    in modo che i dati vengano  memorizzati  in forma permanente sul file
    rubrica. Offrire all’utente un menu con le opzioni: inserimento, modifica,
    cancellazione e visualizzazione dell’intera rubrica.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

void new (int *, char[][LEN]);
void edit (int *, char[][LEN]);

FILE *fp;

int main (int argc, char const *argv[])
{
    char mat[LEN][LEN];
    char choise;

    int lastIndex;
    int c;
    int i, j;

    choise = 0;
    mat[0][0] = '0';
    fp = fopen ("rubrica.txt", "a+");


    i = j = 0;
    rewind (fp);
    while (!feof (fp))
    {
        c = fgetc (fp); 

        if (c == '\n' || c == '\0')
        {
            mat[i++][j] = '\0'; 
            j = 0; 
        }   
        else
            mat[i][j++] = c;
    }

    lastIndex = i - 1;
    printf (">> Importazione dati completata\n");
    fclose (fp);
    fp = fopen ("rubrica.txt", "w");
    fclose (fp);
    
    while (!choise)
    {
        printf ("\n\tMENU\n\n");
        printf ("0. Uscire\n");
        printf ("1. Nuovo contatto\n");
        printf ("2. Modifica contatto\n");
        printf ("3. Cancellazione contatto\n");
        printf ("4. Visualizzazione rubrica\n");
        printf ("> ");
        choise = getchar ();
        getchar ();

        switch (choise)
        {
            case '0':
                printf ("Uscita dal programma...\n");
                exit (0);
            
            case '1':
                printf ("Creazione nuovo contatto...\n");
                new (&lastIndex, mat);
                choise = 0;
                break;

            case '2':
                printf ("Modifica contatto...\n");
                edit (&lastIndex, mat);
                break;

            default:
                break;
        }
    }
    

    printf ("\n");
    return 0;
}

void new (int *lastIndex, char mat[][LEN])
{
    char name[LEN];
    char surname[LEN];
    char number[LEN];

    int c;
    int i, j, x;

    x = 0;

    *(lastIndex) += 1;

    fp = fopen ("rubrica.txt", "w");



    printf ("Inserire il nome > ");
    while ((c = getchar ()) != '\n')
        name[x++] = c;
    name[x] = '\0';
    for (j = 0; j < strlen (name); j++)
        mat[*lastIndex][j] = name[j];
    mat[*lastIndex][j++] = ' ';

    printf ("Inserire il cognome > ");
    x = 0;
    while ((c = getchar ()) != '\n')
        surname[x++] = c;
    surname[x] = '\0';
    for (i = 0; i < strlen (surname); i++)
        mat[*lastIndex][i + j] = surname[i];
    mat[*lastIndex][i + j] = ' ';
    j += i + 1;

    printf ("Inserire il numero > ");
    x = 0;
    while ((c = getchar ()) != '\n')
        number[x++] = c;
    number[x] = '\0';
    for (i = 0; i < strlen (number); i++)
        mat[*lastIndex][i + j] = number[i]; 
    // mat[*lastIndex][i + j++] = '\n';
    mat[*lastIndex][i + j] = '\0';

    for (i = 0; i < *lastIndex + 1; i++)
    {
        for (j = 0; mat[i][j] != '\0'; j++)
            fprintf (fp, "%c", mat[i][j]);
        fprintf (fp, "\n");
    }
    fflush (fp);
    fclose (fp);


    return ;
}

void edit (int *lastIndex, char mat[][LEN])
{
    char name[LEN];
    char matName[LEN];
    char surname[LEN];
    char matSurname[LEN];

    int c;
    int i, j, k;

    i = 0;

    printf ("Inserire il nome > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';

    printf ("Inserire il cognome > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        surname[i++] = c;
    surname[i] = '\0';

    printf ("\n");
    for (i = 0; i < *lastIndex + 1; i++)
    {
        printf ("%d) > ", i);
        for (j = 0; mat[i][j] != '\0'; j++)
            printf ("%c", mat[i][j]);
        printf ("\n");
    }

    // todo: scelta della riga da modificare


}


