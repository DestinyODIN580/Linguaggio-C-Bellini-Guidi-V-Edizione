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

void new (int *, char[][LEN]);      /* funzione che immette un nuovo contatto */
void edit (int *, char[][LEN]);     /* funzione che modifica un contatto */
void delete (int *, char[][LEN]);   /* funzione che elimina un contatto */
void display (int *, char[][LEN]);  /* funzione che mostra la rubrica */
void search (int *, char[][LEN]);   /* funzione che restituisce il numero dato un nome */

FILE *fp;                           /* puntatore al file "rubrica.txt" */

int main (int argc, char const *argv[])
{
    char mat[LEN][LEN];             /* matrice della rubrica */
    char choise;                    /* scelta */

    int lastIndex;                  /* indice in modifica della matrice */
    int c;                          /* carattere in ingresso */
    int i, j;                       /* contatori */

    i = j = 0;
    choise = 0;
    mat[0][0] = '0';
    fp = fopen ("rubrica.txt", "a+");


    /* importazione del file nella matrice */
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

    /* reset del file */
    fp = fopen ("rubrica.txt", "w");
    fclose (fp);
    
    /* esito */
    while (!choise)
    {
        printf ("\n\tMENU\n\n");
        printf ("0. Uscire\n");
        printf ("1. Nuovo contatto\n");
        printf ("2. Modifica contatto\n");
        printf ("3. Cancellazione contatto\n");
        printf ("4. Visualizzazione rubrica\n");
        printf ("5. Visualizzazione numero per nome\n");
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
                choise = 0;
                break;

            case '3':
                printf ("Elimazione contatto...\n");
                delete (&lastIndex, mat);
                choise = 0;
                break;

            case '4':
                printf ("Visualizzazione rubrica...\n");
                display (&lastIndex, mat);
                choise = 0;
                break;

            case '5':
                printf ("Visualizzazione numero...\n");
                search (&lastIndex, mat);
                choise = 0;
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
    char name[LEN];     /* nome del nuovo contatto */
    char surname[LEN];  /* cognome del nuovo contatto */
    char number[LEN];   /* numero del nuovo contatto */

    int c;              /* carattere in ingresso */
    int i, j, x;        /* contatori */

    x = 0;

    *(lastIndex) += 1;

    fp = fopen ("rubrica.txt", "w");


    /* costruzione di name */
    printf ("Inserire il nome > ");
    while ((c = getchar ()) != '\n')
        name[x++] = c;
    name[x] = '\0';

    /* importazione in mat di name */
    for (j = 0; j < strlen (name); j++)
        mat[*lastIndex][j] = name[j];
    mat[*lastIndex][j++] = ' ';

    /* costruzione di surname */
    printf ("Inserire il cognome > ");
    x = 0;
    while ((c = getchar ()) != '\n')
        surname[x++] = c;
    surname[x] = '\0';

    /* importazione in mat di surname */
    for (i = 0; i < strlen (surname); i++)
        mat[*lastIndex][i + j] = surname[i];
    mat[*lastIndex][i + j] = ' ';
    j += i + 1;

    /* costruzione di number */
    printf ("Inserire il numero > ");
    x = 0;
    while ((c = getchar ()) != '\n')
        number[x++] = c;
    number[x] = '\0';

    /* importazione in mat di number */
    for (i = 0; i < strlen (number); i++)
        mat[*lastIndex][i + j] = number[i]; 
    // mat[*lastIndex][i + j++] = '\n';
    mat[*lastIndex][i + j] = '\0';

    /* update del file */
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
    char newLine[LEN];      /* nuova riga */

    int row;                /* riga da modificare */
    int c;                  /* carattere in ingresso */
    int i, j;               /* contatori */


    /* display dell'elenco */
    printf ("\nElenco telefonico:\n");
    for (i = 0; i < *lastIndex + 1; i++)
    {
        printf ("%d) > ", i);
        for (j = 0; mat[i][j] != '\0'; j++)
            printf ("%c", mat[i][j]);
        printf ("\n");
    }
    printf ("\n\n");
    // todo: scelta della riga da modificare
    row = *lastIndex + 1;
    while (row > *lastIndex)
    {
        printf ("Riga da modificare > ");
        scanf ("%d", &row);
    }
    getchar ();

    printf ("> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        newLine[i++] = c;
    newLine[i] = '\0';

    for (i = 0; i < strlen (newLine); i++)
        mat[row][i] = newLine[i];
    mat[row][i] = '\0';

    fopen ("rubrica.txt", "w");
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

void delete (int *lastIndex, char mat[][LEN])
{
    char newLine[LEN];

    int row;
    int c;
    int i, j;


    /* display dell'elenco */
    printf ("\nElenco telefonico:\n");
    for (i = 0; i < *lastIndex + 1; i++)
    {
        printf ("%d) > ", i);
        for (j = 0; mat[i][j] != '\0'; j++)
            printf ("%c", mat[i][j]);
        printf ("\n");
    }
    printf ("\n\n");
    
    /* scelta della riga da modificare e assegnazione di row */
    row = *lastIndex + 1;
    while (row > *lastIndex)
    {
        printf ("Riga da eliminare > ");
        scanf ("%d", &row);
    }
    getchar ();

    /* shift delle righe */
    for (j = row + 1; j <= *lastIndex; j++)
    {
        for (i = 0; mat[j][i] != '\0'; i++)
            mat[j - 1][i] = mat[j][i];
        mat[j - 1][i] = '\0';
    }
    *lastIndex -= 1;

    /* update del file */
    fopen ("rubrica.txt", "w");
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

void display (int *lastIndex, char mat[][LEN])
{
    int i, j;


    /* display della rubrica */
    printf ("\nElenco telefonico:\n");
    for (i = 0; i < *lastIndex + 1; i++)
    {
        printf ("%d) > ", i);
        for (j = 0; mat[i][j] != '\0'; j++)
            printf ("%c", mat[i][j]);
        printf ("\n");
    }
    printf ("\n\n");


    return ;
}

void search (int *lastIndex, char mat[][LEN])
{
    char name[LEN];     /* nome da cercare */

    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = j = 0;


    /* costruzione di name */
    printf ("Inserire il nome di cui trovare il numero > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';

    /* ricerca di name e display del numero associato */
    for (i = 0; i <= *lastIndex; i++)
    {
        for (j = 0; mat[i][j] != ' '; j++)
            if (name[j] != mat[i][j])
                break;

        if (j == strlen (name))
        {
            for (; mat[i][j] < '0' || mat[i][j] > '9'; j++);

            /* esito */
            printf ("\nNumero di %s >> ", name);
            for (j-- ; mat[i][j] != '\0'; j++)
                printf ("%c", mat[i][j]);

        }
    }
    printf ("\n\n");


    return ;
}
// Marco Fiorillo 21/09/2021
