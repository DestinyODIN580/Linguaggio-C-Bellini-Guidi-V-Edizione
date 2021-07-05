/* 3.3 - Un'altra possibilita'per il calcolo del fattoriale */

/* Calcolo n! (n fattoriale) */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int n, fat, aux;


    printf ("CALCOLO DI N!\n\n");
    printf ("Inser. n: ");
    scanf ("%d", &n);

    for (fat = 1, aux = 2; aux <= n; aux++)
        fat = fat * aux;

    printf ("Il fattoriale di: %d ha valore: %d\n", n, fat);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
