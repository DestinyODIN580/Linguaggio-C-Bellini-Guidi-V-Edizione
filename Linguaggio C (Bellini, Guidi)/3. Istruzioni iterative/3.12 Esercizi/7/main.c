/* 30.
    Scrivere un programma che visualizzi tutte le coppie di numeri presenti sulla superficie dei pezzi del domino.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int i, j;       /* contatori */

    
    /* esito */
    for (i = 6; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
            printf ("%d | %d  ", j, i);

        printf ("\n");
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
