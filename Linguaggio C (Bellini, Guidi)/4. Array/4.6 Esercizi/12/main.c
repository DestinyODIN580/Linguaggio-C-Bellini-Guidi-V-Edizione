/* 47.
    Modificare il programma che calcola il prodotto di due matrici bidimensionali esaminato nel presente capitolo,
    in modo che sia l’utente a scegliere le dimensioni degli array. Il programma deve verificare la correttezza delle
    dimensioni inserite.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int mat1[LEN][LEN];     /* prima matrice */
    int mat2[LEN][LEN];     /* seconda matrice */
    int pmat[LEN][LEN];     /* matrice prodotto */

    int N, M, P;            /* lunghezza delle matrici */

    int i, j, k;            /* contatori */

    
    /* assegnazione di N */
    do
    {
        printf ("N > ");
        scanf ("%d", &N);
    } while (N > 100 || N < 0);

    /* assegnazione di M */
    do
    {
        printf ("M > ");
        scanf ("%d", &M);
    } while (M > 100 || M < 0);

    /* assegnazione di P */
    do
    {
        printf ("P > ");
        scanf ("%d", &P);
    } while (P > 100 || P < 0);

    /* costruzione mat1 */
    printf ("\n   \n   CARICAMENTO DELLA PRIMA MATRICE   \n   \n");
    for (i = 0; i < N; i++)
        for (j = 0; j < P; j++)
        {
            printf ("Inserisci linea %d colonna %d val: ", i, j);
            scanf ("%d", &mat1[i][j]);
        }
    
    /* costruzione mat2 */
    printf ("\n   \n   CARICAMENTO DELLA SECONDA MATRICE   \n   \n");
    for (i = 0; i < P; i++)
        for (j = 0; j < M; j++)
        {
            printf ("Inserisci linea %d colonna %d val: ", i, j);
            scanf ("%d", &mat2[i][j]);
        }

    /* costruzione mat3 */
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            pmat[i][j] = 0;
            for (k = 0; k < P; k++)
                pmat[i][j] = pmat[i][j] + mat1[i][k] * mat2[k][j];
        }

    /* stampa mat1 */
    printf ("\n   \n   PRIMA MATRICE   \n");
    for (i = 0; i < N; i++)
    {
        printf ("\n");
        for (j = 0; j < P; j++)
            printf ("%5d", mat1[i][j]);
    }

    /* stampa mat2 */
    printf ("\n   \n   SECONDA MATRICE   \n");
    for (i = 0; i < P; i++)
    {
        printf ("\n");
        for (j = 0; j < M; j++)
            printf ("%5d", mat2[i][j]);
    }

    /* esito */
    printf ("\n   \n   MATRICE PRODOTTO   \n");
    for (i = 0; i < N; i++)
    {
        printf ("\n");
        for (j = 0; j < M; j++)
            printf ("%5d", pmat[i][j]);
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 9/07/2021
