/* 10.3 - Calcolo delle combinazioni semplici; vengono utilizzare le funzioni dispo e fat viste precedentemente */

/* Calcolo delle combinazioni semplici di n oggetti presi k a k */

#include <stdio.h>

int dispo (int, int, int);
int comb (int, int);
int fat (int);

int main (int argc, char const *argv[])
{

    int n, k;

    
    printf ("Combinazioni semplici di k su n oggetti\n");
    printf ("Inser. n: \t");
    scanf ("%d", &n);
    printf ("Inser. k; \t");
    scanf ("%d", &k);
    printf ("Le combin. sempl. di %d su %d sono: %d\n", k, n, comb (k, n));


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

int comb (int k, int n)
{
    return dispo (k, n, n) / fat (k);
}

int fat (int n)
{

    if (n == 0)
        return 1;
    else
        return n * fat (n - 1);

}
// Marco Fiorillo 26/07/2021
