/* 54.
    Verificare, analogamente a quanto fatto in Figura 5.1, il comportamento della prima versione di bubblesort applicata
    al seguente vettore:

        vet = [3, 31, 1, 23, 41, 5, 0, 66, 2, 8, 88, 9, 91, 19, 99]

*/

#include <stdio.h>

#define LEN 15

int main (int argc, char const *argv[])
{
    int vet[LEN] = {3, 31, 1, 23, 41, 5, 0, 66, 2, 8, 88, 9, 91, 19, 99};   /* vettore */
    int aux;                                                                /* variabile per il bubble sort */
    int i, j;                                                               /* contatori */                                                            


    /* esito */
    for (i = 0; i < LEN - 1 - i; i++)
        for (j = 0; j < LEN - 1 - i; j++)
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


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/07/2021
