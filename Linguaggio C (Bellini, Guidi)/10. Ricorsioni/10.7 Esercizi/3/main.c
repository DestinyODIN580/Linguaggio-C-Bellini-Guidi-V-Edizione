/* 105.
    Predisporre una funzione che, in forma iterativa, calcoli la potenza: base elevata a esponente, dove
    esponente è un numero intero maggiore o uguale a zero.
*/

#include <stdio.h>

int powerFunction (int, int);   /* funzione che calcola la potenza */

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
    printf ("%d elevato alla %d >> %d", base, exponent, powerFunction (base, exponent));


    printf ("\n");
    return 0;
}

int powerFunction (int base, int exponent)
{
    int pow;    /* potenza */
    int i;      /* contatore */


    /* calcolo della potenza */
    for (pow = base, i = 1; i < exponent; i++)
        pow *= base;

    return pow;
}
// Marco Fiorillo 27/07/2021
