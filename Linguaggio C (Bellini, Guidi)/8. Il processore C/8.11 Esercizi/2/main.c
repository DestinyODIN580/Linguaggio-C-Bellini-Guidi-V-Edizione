/* 93.
    Realizzare la macro CUBO(X) che verrà espansa al valore di X elevato alla terza potenza. Quali valutazioni
    possiamo fare, sia in termini di efficienza sia più in generale, scegliendo di calcolare il valore assoluto e il cubo di
    un numero con una funzione o con una macro?
*/

/* tramite le macro i processi sono piu veloci e in termini di lunghezza
    del codice per operazioni cosi piccole sono molto piu convenienti */

#include <stdio.h>

#define CUBO(X) X * X * X

int main (int argc, char const *argv[])
{
    int x;  /* parametro della macro CUBO */


    /* assegnazione di x */
    printf ("Inserire x > ");
    scanf ("%d", &x);

    /* esito */
    printf (">> CUBO(%d) = %d", x, CUBO (x));


    printf ("\n");
    return 0;
}
// Marco Fiorillo 24/07/2021
