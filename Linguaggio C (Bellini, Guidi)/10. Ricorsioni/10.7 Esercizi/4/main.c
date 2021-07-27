/* 106.
    Risolvere l’Esercizio 3 con una funzione ricorsiva.
*/

#include <stdio.h>

int powerFunction (int, int, int);   /* funzione che calcola la potenza */

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
    printf ("%d elevato alla %d >> %d", base, exponent, powerFunction (base, exponent, exponent));


    printf ("\n");
    return 0;
}

int powerFunction (int base, int exponent, int i)
{


    /* calcolo ricorsivo della potenza */
    if (!i)
        return 1;
    else
        return base * powerFunction (base, exponent, i - 1);

}
// Marco Fiorillo 27/07/2021
