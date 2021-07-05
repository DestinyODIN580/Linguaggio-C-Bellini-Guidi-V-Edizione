/* 27.
    Ripetere l’esercizio 3 ma permettendo all’utente di decidere anche i caratteri che devono comporre la cornice e
    la parte interna del rettangolo e quante volte debba essere ripetuta la visualizzazione del rettangolo.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    char border;    /* parte esterna */
    char inner;     /* parte interna */

    int i, j, k;    /* contatori */
    int rows;       /* righe */
    int cols;       /* colonne */
    int reps;       /* ripetizioni */


    /* assegnazione di rows */
    printf ("Inserire il numero di righe > ");
    scanf ("%d", &rows);

    /* assegnazione di cols */
    printf ("Inserire il numero di colonne > ");
    scanf ("%d", &cols);

    /* assegnazione di reps */
    printf ("Inserire il numero di ripetizioni > ");
    scanf ("%d", &reps);
    getchar();

    /* assegnazione di inner */
    printf ("Inserire il carattere interno > ");
    scanf ("%c", &inner);
    getchar();

    /* assegnazione di border */
    printf ("Inserire il carattere esterno > ");
    scanf ("%c", &border);


    /* esito */
    printf ("\n");
    for (k = 0; k < reps; k++)
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                    printf ("%c", border);

                else
                    printf ("%c", inner);
            }
            printf ("\n");
        }
        printf ("\n");
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
