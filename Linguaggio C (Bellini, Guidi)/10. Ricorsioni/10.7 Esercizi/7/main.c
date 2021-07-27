/* 109.
    Scrivere una funzione ricorsiva che calcoli il massimo comune divisore di due numeri interi positivi utilizzando
    l’algoritmo euclideo per cui:

                    t               se k = 0
        MCD(t,k) =  MCD (k, t)      se k > t
                    MCD (k, t%k)    altrimenti
*/

#include <stdio.h>

int MCD (int, int, int);            /* calcola l'MCD */

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
    printf ("MCD tra %d e %d > %d", k, t, MCD (t, k, 0));


    printf ("\n");
    return 0;
}

int MCD (int t, int k, int r)
{

    /* calcolo dell'MCD */
    if (!k)
        return t;
    else
    {
        r = t % k;
        t = k;
        k = r;
        MCD (t, k, r);
    }
}
// Marco Fiorillo 27/07/2021
