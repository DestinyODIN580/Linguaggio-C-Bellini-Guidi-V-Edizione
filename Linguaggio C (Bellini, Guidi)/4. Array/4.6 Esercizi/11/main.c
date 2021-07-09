/* 46.
    Scrivere un programma che, inizializzata una matrice n×n, visualizzi la matrice che si ottiene da quella data
    scambiando le righe con le colonne.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int mat[LEN][LEN];  /* matrice */
    int len;            /* lunghezza */
    int i, j;           /* contatori */


    /* assegnazione di len */
    printf ("Numero di righe e colonne > ");
    scanf ("%d", &len);

    /* costruzione di mat */
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            printf ("Colonna [%d] Riga [%d] > ", j, i);
            scanf ("%d", &mat[i][j]);
        }
        printf ("\n");
    }

    /* stampa di mat righe per colonne */
    printf ("\nMatrice normale >> \n");
    for (i = 0; i < len; i++)
    {
        printf ("{");
        for (j = 0; j < len; j++)
            printf ("%2d", mat[i][j]);
        printf (" };\n");
    }

    /* esito */
    printf ("\nMatrice invertita >> \n");
    for (i = 0; i < len; i++)
    {
        printf ("{");
        for (j = 0; j < len; j++)
            printf ("%2d", mat[j][i]);
        printf (" };\n");
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 9/07/2021
