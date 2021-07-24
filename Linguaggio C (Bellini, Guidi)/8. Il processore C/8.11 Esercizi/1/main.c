/* 92.
    Realizzare la macro ABS(X) che calcola il valore assoluto di X.
*/

#include <stdio.h>

#define ABS(X) (X > 0) ? (X) : -(X)         /* valore assoluto di un numero */

int main (int argc, char const *argv[])
{
    int x;      /* parametro della macro ABS */


    /* assegnazione di x */
    printf ("Valore di x > ");
    scanf ("%d", &x);

    /* esito */
    printf (">> ABS (X) = %d;\n", ABS (x));


    printf ("\n");
    return 0;
}
// Marco Fiorillo 24/07/2021
