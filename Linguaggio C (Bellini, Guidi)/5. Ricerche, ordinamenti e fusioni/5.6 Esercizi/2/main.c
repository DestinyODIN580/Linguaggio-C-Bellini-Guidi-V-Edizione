/* 51.
    Scrivere un programma che carichi una matrice bidimensionale di caratteri e successivamente ricerchi al suo
    interno un valore passato in ingresso dall’utente. Il programma restituisce quindi il numero di linea e di colonna relativo
    all’elemento cercato se questo è presente nella matrice, il messaggio Elemento non presente altrimenti.
*/

#include <stdio.h>

#define LEN 1000

int main (int argc, char const *argv[])
{
    char mat[LEN][LEN];     /* matrice */
    char c;                 /* carattere da ricercare */

    int cols;               /* colonne di mat */
    int rows;               /* righe di mat */
    int flag;               /* flag */
    int i, j;               /* contatori */


    /* assegnazione di cols */
    printf ("Inserire il numero di colonne > ");
    scanf ("%d", &cols);

    /* assegnazione di rows */
    printf ("Inserire il numero di righe > ");
    scanf ("%d", &rows);
    getchar();

    /* costruzione di mat */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf ("Colonna [%d] riga [%d] > ", j, i);
            scanf ("%c", &mat[i][j]);
            getchar();
        }
        printf ("\n");
    }

    /* assegnazione di c */
    printf ("Carattere da cercare > ");
    scanf ("%c", &c);

    /* esito */
    for (flag = i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (c == mat[i][j])
            {
                flag = 1;
                printf ("Lettera \"%c\" a coordinate >> (%d; %d);\n", c, j, i);
            }
    if (!flag)
        printf ("Elemento non presente\n");


    printf ("\n");
    return 0;
}
//
