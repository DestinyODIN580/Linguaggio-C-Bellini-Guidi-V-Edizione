/* 97.
    Scrivere un programma che esegua la scansione e la visualizzazione di un vettore di interi.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{   
    int vetDim;                                 /* dimensione di vet */
    int i;                                      /* contatore */

    int *vet;                                   /* vettore */
    int *pVet;                                  /* puntatore al vettore */

    vet = malloc (sizeof (int) * vetDim);


    /* assegnazione di dim */
    printf ("Inserire la dimenzione dell'array > ");
    scanf ("%d", &vetDim);

    /* costruzione di vet */
    for (pVet = &vet[0], i = 0; i < vetDim; i++)
    {
        printf ("Valore [%d] > ", i + 1);
        scanf ("%d", pVet++);
    }

    /* esito */
    printf ("\n");
    for (i = 0; i < vetDim; i++)
        printf ("%p --> %d\n", vet + i, *(vet + i));
    free (vet);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 24/07/2021
