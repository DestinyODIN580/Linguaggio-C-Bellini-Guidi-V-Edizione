/* 108.   
    Risolvere l’Esercizio 5 con una funzione ricorsiva.
*/

#include <stdio.h>

float powerFunction (float, int, int);   /* funzione che calcola la potenza */

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
    printf ("%d elevato alla %d >> %d;\n", base, exponent, powerFunction (base, exponent, exponent));
      

    printf ("\n");
    return 0;
}

float powerFunction (float base, int exponent, int i)
{


    /* calcolo ricorsivo della potenza */
    if (!i)
        return 1;
    else if (exponent > 0)
        return base * powerFunction (base, exponent, i - 1);
    else
        return 1 / base * powerFunction (base, exponent, i + 1);

}
// Marco Fiorillo 27/07/2021
