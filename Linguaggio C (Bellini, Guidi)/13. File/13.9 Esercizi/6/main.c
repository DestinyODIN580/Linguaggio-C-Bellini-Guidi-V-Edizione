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
void edit (char[][LEN]);

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
    while (!feof (fp))
    {
        mat[i][j] = fgetc (fp); 

        if (mat[i][j] == '\n') 
            mat[i++][++j] = '\0';
        else
            j++;
    }
    
    lastIndex = i;
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

        switch (choise)
        {
            case '0':
                printf ("Uscita dal programma...\n");
                exit (0);
            
            case '1':
                printf ("Creazione nuovo contatto...\n");
                new (&lastIndex, mat);
                break;

            case '2':
                printf ("Modifica contatto...");

            default:
                break;
        }
    }
    



    return 0;
}

void new (int *lastIndex, char mat[][LEN])
{
    char name[LEN];
    char surname[LEN];
    char number[LEN];

    int c;
    int i, j;

    i = 0;

    fp = fopen ("rubrica.txt", "a+");


    getchar ();

    printf ("Inserire il nome > ");
    scanf ("%s", name);
    for (j = 0; j < strlen (name); j++)
        mat[*lastIndex][j] = name[j];
    mat[*lastIndex][j++] = ' ';

    printf ("Inserire il cognome > ");
    scanf ("%s", surname);
    for (i = 0; i < strlen (surname); i++)
        mat[*lastIndex][i + j] = surname[i];
    mat[*lastIndex][i + j] = ' ';
    j += i + 1;

    printf ("Inserire il numero > ");
    scanf ("%s", number);
    for (i = 0; i < strlen (number); i++)
        mat[*lastIndex][i + j] = number[i]; 
    mat[*lastIndex][i + j++] = '\n';
    mat[*lastIndex][i + j] = '\0';

    for (i = 0; i < *lastIndex + 1; i++)
        for (j = 0; mat[i][j] != '\0'; j++)
            fprintf (fp, "%c", mat[i][j]);
    fflush (fp);
    *(lastIndex) += 1;

    fclose (fp);
    

    return ;

}



