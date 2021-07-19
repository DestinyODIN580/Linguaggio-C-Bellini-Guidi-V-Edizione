/* 77.
    Scrivere una funzione che calcoli una qualunque potenza maggiore o uguale a 0
*/

#include <stdio.h>

int powFunc (int, int);         /* funzione che calcola la potenza con esponenti positivi */

int main (int argc, char const *argv[])
{
    int base;           /* base */
    int exponent;       /* esponente */


    /* assegnazione di base */
    printf ("Inserire la base > ");
    scanf ("%d", &base);

    /* assegnazione di exponent */
    printf ("Inserire l'esponente > ");
    scanf ("%d", &exponent);

    /* esito */
    printf ("%d elevato alla %d >> %d", base, exponent, powFunc (base, exponent));


    printf ("\n");
    return 0;
}

int powFunc (int base, int exponent)
{
    int pow;        /* valore della potenza */
    int i;          /* contatore */

    pow = base;

    /* calcolo della potenza */
    if (!exponent)
        return (1);
    else
    {
        for (i = 1; i < exponent; i++)
            pow *= base;
        
        return (pow);
    }       
}
// Marco Fiorillo 19/07/2021
