/* 55.
    Verificare il comportamento della versione ottimizzata di bubblesort applicata al vettore del precedente esercizio.
    Quanti cicli interni si sono risparmiati rispetto alla prima versione?
*/

#include <stdio.h>

#define LEN 15

int main (int argc, char const *argv[])
{
    int vet[LEN] = {3, 31, 1, 23, 41, 5, 0, 66, 2, 8, 88, 9, 91, 19, 99};   /* vettore */
    int aux;                                                                /* variabile per il bubble sort */
    int i, j, k, p, g, n;                                                   /* contatori */                                                            

    g = 0;
    p = n = LEN;


    /* esito */
    do
    {
        k = 0;
        for (j = 0; j < n - 1; j++, g++)
           if (vet[j] > vet[j + 1])
            {

                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                k = 1;
                p = j + 1;
                printf ("\nVet[%2d] >> %d;", j, vet[j]);
            }
        n = p;
    } while (k);

    /* stampa di vet ordinato */
    printf ("\n\nVettore >> {");
    for (i = 0; i < LEN; i++)
        printf ("%2d ", vet[i]);
    printf ("};\n");

    /* stampa statistiche loops */
    printf ("Numero di cicli effettuati >> %d;\n", g);



    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021







