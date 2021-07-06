/* 36.
    Scrivere un programma che, inizializzati in due vettori a e b della stessa lunghezza n valori interi, calcoli la
    somma incrociata degli elementi: a[1] + b[n], a[2] + b[n−1], ... la memorizzi nel vettore c e visualizzi quindi
    a, b e c.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet1[LEN];      /* vettore 1 */
    int vet2[LEN];      /* vettore 2 */
    int vet3[LEN];      /* vettore 3 */
    int vetLen;         /* lunghezza dei vettori */
    int i, j;           /* contatori */


    /* assegnazione di vetLen */
    printf ("Inserire la lunghezza dei vettori > ");
    scanf ("%d", &vetLen);

    /* costruzione di vet1 */
    for (i = 0; i < vetLen; i++)
    {
       printf ("Inserire il valore > ", i + 1);
        scanf ("%d", &vet1[i]);
    }

    /* costruzione di vet2 */
    printf ("\n");
    for (i = 0; i < vetLen; i++)
    {
        printf ("Inserire il valore %d > ", i + 1);
        scanf ("%d", &vet2[i]);
    }

    /* costruzione di vet3 */
    for (i = 0, j = vetLen - 1; i < vetLen; i++, j--)
        vet3[i] = vet1[i] + vet2[j];

    /* stampa del vet1 */
    printf ("\nVettore 1 --> ");
    for (i = 0; i < vetLen; i++)
        printf ("%d ", vet1[i]);

    /* stampa del vet2 */
    printf ("\nVettore 2 --> ");
    for (i = 0; i < vetLen; i++)
        printf ("%d ", vet2[i]);

    /* esito */
    printf ("\nVettore 3 --> ");
    for (i = 0; i < vetLen; i++)
        printf ("%d ", vet3[i]);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
