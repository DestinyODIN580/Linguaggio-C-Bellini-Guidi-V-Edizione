/* 56.
    Calcolare il numero di confronti effettuati dall’algoritmo di ordinamento ingenuo applicato al vettore dell’Esercizio 4
    e confrontarlo con quello di bubblesort.
*/

#include <stdio.h>

#define LEN 15

int main (int argc, char const *argv[])
{
    int vet[LEN] = {3, 31, 1, 23, 41, 5, 0, 66, 2, 8, 88, 9, 91, 19, 99};   /* vettore */
    int aux;                                                                /* variabile per il bubble sort */
    int i, j, k;                                                            /* contatori */                                                            


    /* esito */
    for (i = k = 0; i < LEN - 1; i++, k++)
        for (j = 0; j < LEN - 1; j++, k++)
           if (vet[j] > vet[j + 1])
            {

                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                printf ("\nVet[%2d] >> %d;", j, vet[j]);
            }

    /* stampa di vet ordinato */
    printf ("\n\nVettore >> {");
    for (i = 0; i < LEN; i++)
        printf ("%2d ", vet[i]);
    printf ("};\n");

    /* stampa statistiche loops */
    printf ("Numero di cicli effettuati >> %d;\n", k);
    printf ("Numero cicli \"j\" >> %d;\n", k - LEN - 1);
    printf ("Numero cicli \"i\" >> %d;\n", LEN - 1);



    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021
