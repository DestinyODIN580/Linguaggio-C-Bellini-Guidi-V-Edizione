/* 10.4 - Calcolo della successione di Fibonacci */

/* Calcolo dei numeri di Fibonacci */

#include <stdio.h>

long int fibo (int);

int main (int argc, char const *argv[])
{
    int n;


    printf ("Successione di Fibonacci f(0) = 1 f(1) = 1 f(n) = f(n-1) + f(n-2)");
    printf ("\nInserire n: \t");
    scanf ("%d", &n);
    printf ("Il termine della successione di argomento %d e': %d\n", n, fibo (n));


    printf ("\n");
    return 0;
}

long int fibo (int n)
{

    if (!n)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo (n - 1) + fibo (n + 2);

}
// Marco Fiorillo 26/07/2021
