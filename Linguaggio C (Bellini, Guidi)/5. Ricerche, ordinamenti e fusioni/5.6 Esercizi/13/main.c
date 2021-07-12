/* 63.
    Scrivere un programma che, richiesti all’utente i valori di una matrice, ne ordini tutte le colonne in senso crescente.
*/

#include <stdio.h>

#define ROWS 100
#define COLS 100

int main (int argc, char const *argv[])
{
    int mat[ROWS][COLS];    /* matrice */
    int rows;               /* righe mat */
    int cols;               /* colonne mat */
    int aux;                /* var. di appoggio */
    int i, j, k;            /* contatori */


    /* assegnazione di rows */
    printf ("Numero di righe > ");
    scanf ("%d", &rows);

    /* assegnazione di cols */
    printf ("Numero di colonne > ");
    scanf ("%d", &cols);

    /* costruzione di mat */
    printf ("\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf ("Riga [%d] colonna [%d] > ", i + 1, j + 1);
            scanf ("%d", &mat[i][j]);
        }

    /* stampa di mat */
    printf ("\n\nMatrice Inserita\n");
    for (i = 0; i < rows; i++)
    {
        printf ("{ ");
        for (j = 0; j < cols; j++)
            printf ("%d ", mat[i][j]);
        printf ("};\n");
    }


    /* sorting */
    for (i = 0; i < cols; i++)
        for (j = 0; j < rows - 1; j++)
            for (k = 0; k < rows - 1; k++)
                if (mat[k][i] > mat[k + 1][i])
                {
                    aux = mat[k][i];
                    mat[k][i] = mat[k + 1][i];
                    mat[k + 1][i] = aux;
                }

    /* esito */
    printf ("\n\nMatrice Ordinata\n");
    for (i = 0; i < rows; i++)
    {
        printf ("{ ");
        for (j = 0; j < cols; j++)
            printf ("%d ", mat[i][j]);
        printf ("};\n");
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021
