/* 45.
    [Matrici simmetriche] Una matrice quadrata n×n di un tipo qualsiasi si dice simmetrica se gli elementi
    simmetrici rispetto alla diagonale principale (dal vertice alto sinistro al vertice basso destro) sono due a due uguali.
    Scrivere un programma che, letta una matrice quadrata di interi, controlli se è simmetrica.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int mat[LEN][LEN];      /* matrice */
    int cols;               /* colonne di mat */
    int rows;               /* righe di mat */
    int sim;                /* flag per la matrice simmetrica */
    int i, j;               /* contatori */


    /* assegnazione cols */
    printf ("Inserire il numero di colonne > ");
    scanf ("%d", &cols);

    /* assegnazione rows */
    printf ("Inserire il numero di righe > ");
    scanf ("%d", &rows);

    /* costruzione di mat */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {   
            printf ("Riga [%d] Colonna [%d] > ", i, j);
            scanf ("%d", &mat[i][j]);
        }
        printf ("\n");
    }

    /* controllo della matrice simmetrica */
    for (sim = i = 0; i < rows ; i++)
        for (j = 0; j < rows; j++)
            if (mat[i][j] != mat[j][i])
                sim = 1;

    /* stampa di mat */
    for (i = 0; i < rows; i++)
    {
        printf ("{");
        for (j = 0; j < cols; j++)
            printf ("%2d ", mat[i][j]);
        printf ("};\n");
    }

    /* esito */
    if (sim)
        printf ("La matrice non e'simmetrica");
    else
        printf ("La matrice e'simmetrica");
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 9/07/2021
