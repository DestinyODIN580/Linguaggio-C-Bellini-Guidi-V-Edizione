/* 113.
    Scrivere una funzione ricorsiva che calcoli

        f(x,n) = 1 * x + 2 * x ^ 2 + 3 * x ^ 3 + ... + (n-1)⋅x n-1 + n⋅x n

    con x float e n int richiesti all’utente.    
*/

#include <stdio.h>
#include <math.h>

float function (float, int, int);

int main (int argc, char const *argv[])
{
    int n;          /* parametro della funzione */

    float x;        /* parametro della funzione */


    /* assegnazione di x */
    printf ("Inserire x > ");
    scanf ("%f", &x);

    /* assegnazione di n */
    printf ("Inserire n > ");
    scanf ("%d", &n);
    
    /* esito */
    printf ("f(x, n) >> %f;", function (x, n, 1));

    
    printf ("\n");
    return 0;
}

float function (float x , int n , int i)
{

    if (i == n + 1)
        return 0;
    else
        return i * pow (x, (double) i) + function (x, n, i + 1); 

}
// Marco Fiorillo 29/07/2021
