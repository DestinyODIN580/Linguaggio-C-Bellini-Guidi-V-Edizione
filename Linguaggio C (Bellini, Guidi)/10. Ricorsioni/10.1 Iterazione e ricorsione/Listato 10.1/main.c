/* 10.1 - Calcolo del fattoriale mediante una funzione ricorsiva */

/* Calcolo del fattoriale con una funzione ricorsiva */

#include <stdio.h>

int fat (int);

int main (int argc, char const *argv[])
{
    int n;


    printf ("CALCOLO DI n!\n\n");
    printf ("Inser. n: \t");
    scanf ("%d", &n);
    printf ("Il fattoriale di: %d ha valore: %d\n", n, fat (n));


    printf ("\n");
    return 0;
}

int fat (int n)
{
    if (!n)
        return 1;
    else
        return n * fat (n - 1);
}
// Marco Fiorillo 26/07/2021