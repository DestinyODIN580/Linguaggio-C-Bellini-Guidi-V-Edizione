/* 143.
    Modificare a scelta alcuni dei programmi visti nei capitoli precedenti in modo da lavorare, invece che su vettori in
    memoria centrale, su file in memoria di massa.

    # --

    51.
        Scrivere un programma di ordinamento in senso decrescente.
    
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet[LEN];       /* vettore */
    int aux;            /* var. di supporto */
    int i, j, k;        /* contatori */

    FILE *fp;

    i = 0;

    fp = fopen ("file.txt", "r");


    /* importazione di file.txt in vet */
    while (!feof (fp))
        fscanf ("%d ", &vet[i++]);

    /* sorting del vettore in senso decrescente */
    for (j = 0; j < i - 1; j++)
        for (k = 0; k < i - 1; k++)
            if (vet[k] < vet[k + 1])
            {
                aux = vet[k + 1];
                vet[k + 1] = vet[k];
                vet[k] = aux;
            }

    /* esito */
    fp = fopen ("file.txt", "w");
    for (j = 0; j < i; j++)
        fprintf (fp, "%d ", vet[j]);
    fclose (fp);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 9/10/2021