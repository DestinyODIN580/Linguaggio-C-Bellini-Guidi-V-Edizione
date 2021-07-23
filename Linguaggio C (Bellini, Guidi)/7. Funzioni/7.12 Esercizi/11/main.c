/* 87.
    Scrivere una funzione che calcoli, al variare di x, il valore dell’espressione: 3x ^ 3 - sqrt (x ^ 2 + 3 / 2)
*/

#include <stdio.h>
#include <math.h>

float equationCalculator (float);   /* funzione che calcola il valore dell'equazione passata x */

int main (int argc, char const *argv[])
{
    float x;                        /* valore della variabile */


    /* assegnazione di x */
    printf ("x = ");
    scanf ("%f", &x);

    /* esito */
    printf ("3x ^ 3 - sqrt (x ^ 2 + 3 / 2) >> %.2f", equationCalculator (x));


    printf ("\n");
    return 0;
}

float equationCalculator (float x)
{
    float ris;                      /* risultato secondo x */

    ris = 3 * pow (x, 3.) - sqrt ((pow (x, 2.) + 3.) / 2.);


    return ris;
}
// Marco Fiorillo 23/07/2021
