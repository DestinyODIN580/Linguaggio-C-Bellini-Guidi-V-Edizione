/* 5.
   Scrivere un programma che calcoli e visualizzi le seguenti espressioni:

    a = ZERO - abs(x)
    b = TOP - abs(y)
    c = a*b

    dove x e y sono variabili intere immesse dall’utente, ZERO e TOP sono costanti intere di valore 0 e 1000. 
*/

#include <stdio.h>
#include <stdlib.h>

#define ZERO 0
#define TOP 1000

int main (int argc, char const *argv[])
{
    int a;      /* espressione 1 */
    int b;      /* espressione 2 */
    int c;      /* espressione 3 */
    int x, y;   /* variabili in input */


    /* assegnazione di x */
    printf ("Inserire il valore di x > ");
    scanf ("%d", &x);
    
    /* assegnazione di y */
    printf ("Inserire il valore di y > ");
    scanf ("%d", &y);

    /* esito */
    printf ("\na = %d --> ZERO - abs (x);", a = ZERO - abs (x));
    printf ("\nb = %d --> TOP - abs (y);", b = TOP - abs (y));
    printf ("\nc = %d --> c = a * b;", c = a * b);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
