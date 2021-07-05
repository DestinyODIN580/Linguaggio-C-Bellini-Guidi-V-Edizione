/* 3.2 - Calcolo del fattoriale di n */

/* Calcolo di n! (n fattoriale) */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int n, fat, m;


    printf ("CALCOLO DI N!\n\n");
    printf ("Inser. n: ");
    scanf ("%d", &n);

    for (fat = m = n; m > 2; m--)
        fat = fat * (m - 1);

    printf ("Il fattoriale di: %d ha valore: %d\n", n, fat);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
