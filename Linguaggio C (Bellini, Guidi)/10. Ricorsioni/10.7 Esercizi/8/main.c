/* 110.
    Scrivere una funzione ricorsiva che calcoli il massimo comune divisore di due numeri interi positivi ricordando che

                    MCD(t-k, k) se t > k
        MCD(t,k) =  t           se t = k
                    MCD(k, t)   se t < k
*/

#include <stdio.h>

int MCD (int, int);            /* calcola l'MCD */

int main (int argc, char const *argv[])
{
    int k, t;                       /* valori in input */


    /* assegnazione di k */
    printf ("Inserire k > ");
    scanf ("%d", &k);

    /* assegnazione di t */
    printf ("Inserire t > ");
    scanf ("%d", &t);

    /* esito */
    printf ("MCD tra %d e %d > %d", k, t, MCD (t, k));


    printf ("\n");
    return 0;
}

int MCD (int t, int k)
{


    /* calcolo dell'MCD */
    if (t == k)
        return t;
    else if (t > k)
        return MCD (t - k, k);
    else
        return MCD (k, t);

}
// Marco Fiorillo 28/07/2021
