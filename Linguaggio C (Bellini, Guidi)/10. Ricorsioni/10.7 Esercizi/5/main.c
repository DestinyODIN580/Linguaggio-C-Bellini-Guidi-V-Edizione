/* 107.
    Estendere la soluzione dell’Esercizio 3 in modo che esponente possa essere un numero intero qualsiasi (anche
    negativo).
*/

#include <stdio.h>

float powerFunction (float, int);   /* funzione che calcola la potenza */

int main (int argc, char const *argv[])
{
    int base;           /* base */
    int exponent;       /* esponente */


    /* assegnazione di base */
    printf ("Inserire la base > ");
    scanf ("%d", &base);

    /* assegnazioe di exponent */
    printf ("Inserire l'esponente > ");
    scanf ("%d", &exponent);

    /* esito */
    printf ("%d elevato alla %d >> %f", base, exponent, powerFunction (base, exponent));


    printf ("\n");
    return 0;
}

float powerFunction (float base, int exponent)
{
    int i;        /* contatore */

    float pow;    /* potenza */
    


    /* calcolo della potenza */
    if (exponent > 0)
        for (pow = base, i = 1; i < exponent; i++)
            pow *= base;
    else
        for (pow = 1. / base, i = -1; i > exponent; i--)
            pow /= base;

    return pow;
}
// Marco Fiorillo 27/07/2021
