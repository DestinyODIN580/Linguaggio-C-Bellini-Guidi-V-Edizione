/* 3.7 - Esempio di cicli annidati */

/* Esempio di cicli annidati */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int n, m, i, j;


    printf ("Inserire il numero di linee: \t");
    scanf ("%d", &n);

    printf ("Inserire il numero di colonne: \t");
    scanf ("%d", &m);
    
    for (i = 1; i <= n; i++)    /* inizio blocco ciclo esterno */
    {
        printf ("\n");
        for (j = 1; j <= m; j++)
            printf ("+");   
    }                           /* fine blocco ciclo esterno */


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
