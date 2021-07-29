/* 114.
    Scrivere un programma che calcoli i numeri ottenuti in base alla seguente definizione:

        a1 = 3;
        a2 = 7;
        an = 2 * a n-1 − 3⋅a n-2  per n ≥ 3

    Cosa si può dire a proposito del segno (positivo o negativo) dei valori di a n ?
*/

#include <stdio.h>

int function (int, int, int, int);      /* funzione per il calcolo della funzione */


int main (int argc, char const *argv[])
{
    int n;      /* numero della sequenza */
    int a1;     /* numero 1 della sequenza */
    int a2;     /* numero 2 della sequenza */
    int i;      /* contatore */

    i = 0; 
    a1 = 3;
    a2 = 7;


    /* assegnazione di n */
    printf ("Valore di n > ");
    scanf ("%d", &n);

    /* esito */
    printf (">> %d;", function (a1, a2, n, i));


    printf ("\n");
    return 0;
}

int function (int a1, int a2, int n, int i)
{
    int aux;        /* variabiler per lo scambio */


    /* calcolo della sequenza fino ad n */
    if (i == n)
        return a2;
    else
        {
            aux = a1;
            a1 = a2;
            a2 = 2 * a2 - 3 * aux;
            return function (a1, a2,n, i + 1);
        }

}
// Marco Fiorillo 29/07/2021
