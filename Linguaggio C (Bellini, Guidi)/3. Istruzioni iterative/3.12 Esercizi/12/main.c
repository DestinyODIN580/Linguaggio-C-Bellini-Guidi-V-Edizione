/* 35.
    Scrivere un programma che calcoli la radice n-esima di a, con n e a richiesti in input all’utente e n<=10. [Sugg.:
    modificare opportunamente il precedente esercizio.]
*/

#include <stdio.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int n;      /* indice */

    double a;   /* numero in entrata */


    /* assegnazione di a */
    printf ("Inserire il numero di cui calcolare la radice >> ");
    scanf ("%lf", &a);

    /* assegnazione di n e check della sua validita' */
    do
    {
        printf ("Inserire l'indice della radice > ");
        scanf ("%d", &n);
    } while (n > 10);

    /* esito */
    printf ("Radice n-esima [%d] di %.2lf >> %.4lf", n, a, pow (a, 1. / n));


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
