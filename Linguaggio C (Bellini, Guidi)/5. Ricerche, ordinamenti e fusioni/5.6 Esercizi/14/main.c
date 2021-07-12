/* 64.
    Scrivere un programma che, richiesti all’utente i valori di una matrice, ne ordini le righe in modo che il vettore i cui
    elementi corrispondono alla somma delle righe risulti ordinato in senso crescente.
*/

#include <stdio.h>

#define ROWS 100
#define COLS 100

int main (int argc, char const *argv[])
{
    int mat[ROWS][COLS];    /* matrice */
    int vet[ROWS];          /* vettore somma */
    int rows;               /* righe mat */
    int cols;               /* colonne mat */
    int sum1;               /* somma riga x */
    int sum2;               /* somma riga x + 1 */
    int aux;                /* var. per lo scambio */
    int i, j, k;            /* contatori */


    /* assegnazione di rows */
    printf ("Numero di righe > ");
    scanf ("%d", &rows);

    /* assegnazione di cols */
    printf ("Numero di colonne > ");
    scanf ("%d", &cols);

    /* costruzione del vettore */
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf ("Riga [%d] colonna [%d] > ", i + 1, j + 1);
            scanf ("%d", &mat[i][j]);
        }

    /* stampa vettore inserito */
    printf ("\nMatrice inserita\n");
    for (i = 0; i < rows; i++)
    {
        printf ("{ ");
        for (j = 0; j < cols; j++)
            printf ("%d ", mat[i][j]);
        printf ("};\n");
    }

    /* sorting degli elementi di ogni riga */
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols - 1; j++)
            for (k = 0; k < cols - 1; k++)
                if (mat[i][k] > mat[i][k + 1])
                {   
                    aux = mat[i][k];
                    mat[i][k] = mat[i][k + 1];
                    mat[i][k + 1] = aux; 
                }

    /* stampa con le righe ordinate */
    printf ("\nMatrice con elementi ordinati\n");
    for (i = 0; i < rows; i++)
    {
        printf ("{ ");
        for (j = 0; j < cols; j++)
            printf ("%d ", mat[i][j]);
        printf ("};\n");
    }

    /* ordinamento righe */
    for (i = 0; i < rows - 1; i++)
        for (j = 0; j < rows - 1; j++)
        {
            for (sum1 = k = 0; k < cols; k++)
                sum1 += mat[i][j];

            for (sum2 = k = 0; k < cols; k++)
                sum2 += mat[i + 1][j];

            if (sum2 < sum1)
                for (k = 0; k < cols; k++)
                {
                    aux = mat[i][j];
                    mat[i][j] = mat[i + 1][j];
                    mat[i + 1][j] = aux;
                }
        }

    /* esito */
    printf ("\nMatrice con righe ordinate\n");
    for (i = 0; i < rows; i++)
    {
        printf ("{ ");
        for (j = 0; j < cols; j++)
            printf ("%d ", mat[i][j]);
        printf ("};\n");
    }

    /* costruzione di vet */
    for (i = 0; i < rows; i++)
        for (vet[i] = j = 0; j < cols; j++)
            vet[i] += mat[i][j];

    /* esito */
    printf ("\nVettore somma righe ordinate >> [ ");
    for (i = 0; i < rows; i++)
        printf ("%d ", vet[i]);
    printf ("];\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021
