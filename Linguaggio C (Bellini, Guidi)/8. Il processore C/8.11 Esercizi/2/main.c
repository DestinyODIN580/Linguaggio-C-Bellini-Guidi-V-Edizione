/* 93.
    Realizzare la macro CUBO(X) che verrà espansa al valore di X elevato alla terza potenza. Quali valutazioni
    possiamo fare, sia in termini di efficienza sia più in generale, scegliendo di calcolare il valore assoluto e il cubo di
    un numero con una funzione o con una macro?
*/

/* tramite le macro per quanto riguarda i valori da sostituire vi e'un meccanismo di "trova e sostituisci"
    piu'che di assegnazione, che sono piu'lenti. Inoltre usare una "funzione" cubo invece che ogni volta scrivere
    x*x*x e'piu'comodo al programmatore */

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
