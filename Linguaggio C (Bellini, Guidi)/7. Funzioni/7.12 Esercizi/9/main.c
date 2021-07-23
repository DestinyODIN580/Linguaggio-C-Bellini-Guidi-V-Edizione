/* 85.
    Modificare la funzione dell’Esercizio 1 esercizio in modo che calcoli anche le potenze negative.
*/

#include <stdio.h>

float powFunc (float, int);  /* funzione che calcola la potenza con esponenti positivi */

int main (int argc, char const *argv[])
{
    int exponent;           /* esponente */

    float base;             /* base */


    /* assegnazione di base */
    printf ("Inserire la base > ");
    scanf ("%f", &base);

    /* assegnazione di exponent */
    printf ("Inserire l'esponente > ");
    scanf ("%d", &exponent);

    /* esito */
    printf ("%.f elevato alla %d >> %.8f", base, exponent, powFunc (base, exponent));


    printf ("\n");
    return 0;
}

float powFunc (float base, int exponent)
{
    float pow;              /* valore della potenza */

    int i;                  /* contatore */


    /* calcolo della potenza */
    if (!exponent)
        return (1);
    else if (exponent > 0)
    {
        for (pow = base, i = 1; i < exponent; i++)
            pow *= base;
        
        return (pow);
    }       
    else
    {
        for (pow = 1. / base, i = -1; i > exponent; i--)
            pow /= base;

        return (pow);
    }

}
// Marco Fiorillo 23/07/2021
