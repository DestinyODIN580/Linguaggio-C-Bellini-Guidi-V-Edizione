/* 48.
    Scrivere un programma che, letta una matrice di interi o reali, individui la colonna con somma degli elementi
    massima.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int colIndex;           /* indice della colonna maggiore */
    int rows;               /* righe di mat */
    int cols;               /* colonne di mat */
    int i, j;               /* contatori */

    float mat[LEN][LEN];    /* matrice */
    float colSumMax;        /* somma colonna massima */
    float colSum;           /* somma colonna singola colonna */
    

    /* inizializzazione rows */
    printf ("Numero di righe > ");
    scanf ("%d", &rows);

    /* inizializzazione cols */
    printf ("Numero di colonne > ");
    scanf ("%d", &cols);

    /* costruzione mat */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf ("Colonna [%d] Riga [%d] > ", j, i);
            scanf ("%f", &mat[i][j]);
        }
        printf ("\n");
    }

    /* inizializzazione colSumMax */
    for (colSumMax = i = j = 0, colIndex = 1; i < rows; i++)
        colSumMax += mat[i][j];
    printf ("Colonna 1 >> %.f\n", colSumMax);

    /* determinazione colIndex e colSumMax */
    for (i = 1; i < cols; i++)
    {
        for (colSum = j = 0; j < rows; j++)
            colSum += mat[j][i];
        
        if (colSum > colSumMax)
        {
            colSumMax = colSum;
            colIndex = i + 1;
        }
    }

    /* stampa mat */
    for (i = 0; i < rows; i++)
    {
        printf ("{");
        for (j = 0; j < cols; j++)
        {
            printf ("%5.1f", mat[i][j]);
        }
        printf ("};\n");
    }

    /* esito */
    printf ("\n\nColonna maggiore >> %d;", colIndex);
    printf ("\nSomma colonna %d >> %.2f;", colIndex, colSumMax);
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 9/07/2021
