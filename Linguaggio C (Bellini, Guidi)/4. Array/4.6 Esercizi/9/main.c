/* 44.
    Scrivere un programma che inizializzi e quindi visualizzi una matrice di int in cui ciascun elemento è dato dalla
    somma dei propri indici.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int mat[LEN][LEN];  /* matrice */
    int i, j;           /* contatori */
    int r;              /* righe di mat */
    int c;              /* colonne di mat */


    /* assegnazione di c */
    printf ("Numero di colonne > ");
    scanf ("%d", &c);

    /* assegnazione di r */
    printf ("Numero di righe > ");
    scanf ("%d", &r);

    /* esito */
    for (i = 0; i < r; i++)
    {
        printf ("\n{ ");
        for (j = 0; j < c; j++)
            printf ("%2d ", i + j);
        printf ("}");
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 7/07/2021
