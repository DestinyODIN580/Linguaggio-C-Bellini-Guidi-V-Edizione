/* 34.
    Utilizzare il precedente esercizio per scrivere un programma che calcoli la radice cubica di 2.
    Generalizzare quindi il programma così da calcolare la radice cubica di un qualsiasi float immesso dall’utente.
*/

#include <stdio.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    double n;   /* numero in entrata */


    /* assegnazione di n */
    printf ("Inserire un numero > ");
    scanf ("%lf", &n);

    /* esito */
    printf ("Radice cubica di %.2f >> %.10f", n, pow (n, 1/3.));


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
