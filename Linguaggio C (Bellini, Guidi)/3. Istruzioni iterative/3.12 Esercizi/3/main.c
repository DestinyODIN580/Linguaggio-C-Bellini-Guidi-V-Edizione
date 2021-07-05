/* 26.
    Predisporre un programma che stampi un rettangolo la cui cornice sia costituita da caratteri asterisco, e la parte
    interna da caratteri Q. Il numero di linee e di colonne del rettangolo viene deciso a tempo di esecuzione dall’utente; per
    esempio se il numero delle linee è uguale a 5 e il numero di colonne a 21, sul video deve apparire:

    *********************
    *QQQQQQQQQQQQQQQQQQQ*
    *QQQQQQQQQQQQQQQQQQQ*
    *QQQQQQQQQQQQQQQQQQQ*
    *********************
*/

#include <stdio.h>

#define BORDER '*'
#define INNER 'Q'

int main (int argc, char const *argv[])
{
    int i, j;       /* contatori */
    int rows;       /* righe */
    int cols;       /* colonne */


    /* assegnazione di rows */
    printf ("Inserire il numero di righe > ");
    scanf ("%d", &rows);

    /* assegnazione di cols */
    printf ("Inserire il numero di colonne > ");
    scanf ("%d", &cols);

    /* esito */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
                printf ("%c", BORDER);

            else
                printf ("%c", INNER);
        }
        printf ("\n");
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
