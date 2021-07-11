/* 51.
    Scrivere un programma di ordinamento in senso decrescente.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet[LEN];   /* vettore */
    int vetLen;     /* lunghezza di vet */
    int aux;        /* variabile di appoggio */
    int i, j, k;    /* contatori */


    /* assegnazione di vetLen */
    printf ("Lunghezza del vettore > ");
    scanf ("%d", &vetLen);

    /* costruzione di vet */
    for (i = 0; i < vetLen; i++)
    {
        printf ("Elemento [%d] > ", i + 1);
        scanf ("%d", &vet[i]);
    }

    /* stampa di vet */
    printf ("Vettore inserito >> ");
    for (i = 0; i < vetLen; i++)
        printf ("%2d ", vet[i]);

    /* bubblesort */
    for (i = 0; i < vetLen; i++)
        for (j = 0; j < vetLen; j++)
            if (vet[j] < vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }

    /* esito */
    printf ("\nVettore ordinato >> ");
    for (i = 0; i < vetLen; i++)
        printf ("%2d ", vet[i]);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/07/2021
