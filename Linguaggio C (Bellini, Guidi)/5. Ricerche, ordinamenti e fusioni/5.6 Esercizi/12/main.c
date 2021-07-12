/* 62.
    [Insertion-sort] Utilizzare l’algoritmo del precedente esercizio per scrivere un programma che ordini il vettore
    contemporaneamente all’inserimento dei dati da parte dell’utente.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet[LEN];           /* vettore */
    int vetLen;             /* lunghezza di vet */
    int elem;               /* ultimo elemento */
    int i, j, k;            /* contatori */


    /* assegnazione di vetLen */
    printf ("Lunghezza del vettore > ");
    scanf ("%d", &vetLen);

    /* inizializzazione di vet */
    printf ("Elemento %d > ", i = 1);
    scanf ("%d", &vet[i - 1]);

    /* costruzione di vet */
    for (; i < vetLen; i++)
    {
        printf ("Elemento %d > ", i + 1);
        scanf ("%d", &elem);
        
        for (j = 0; vet[j] < elem && j < i; j++);

        /* shifting */
        for (k = i; k > j; k--)
            vet[k] = vet[k - 1];

        /* integrazione di elem in vet */
        vet[j] = elem;
    }

    /* esito */
    printf ("Vettore >> { ");
    for (i = 0; i < vetLen; i++)
        printf ("%d ", vet[i]);
    printf ("};\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021
