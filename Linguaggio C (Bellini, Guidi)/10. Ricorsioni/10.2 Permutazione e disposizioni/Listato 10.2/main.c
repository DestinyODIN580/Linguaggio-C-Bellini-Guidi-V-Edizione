/* 10.2 - Calcolo delle disposizioni semplici */

/* Calcolo delle disposizioni semplici di n oggetti presi k a k */

#include <stdio.h>

int dispo (int, int, int);

int main (int argc, char const *argv[])
{

    int n, k;

    
    printf ("Disposizioni semplici di k su n oggetti\n");
    printf ("Inser. n: \t");
    scanf ("%d", &n);
    printf ("Inser. k; \t");
    scanf ("%d", &k);
    printf ("Le dispos. sempl. di %d su %d sono: %d\n", k, n, dispo (k, n, n));


    printf ("\n");
    return 0;
}

int dispo (int k, int n, int m)
{

    if (n == m - k)
        return 1;
    else
        return n * dispo (k, n - 1, m);

}
// Marco Fiorillo 26/07/2021
