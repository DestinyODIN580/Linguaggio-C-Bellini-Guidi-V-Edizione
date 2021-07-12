/* 57.
    Scrivere un programma che, richiesti i valori di un vettore ordinato in modo crescente, li inverta ottenendo un vettore
    decrescente. Si chiede di risolvere il problema utilizzando un solo ciclo.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet[LEN];    
    int vetLen;
    int i, j;
    int aux;


    printf ("Lunghezza del vettore > ");
    scanf ("%d", &vetLen);

    printf ("\nInserire i valori in ordine crescente!\n\n");
    for (i = 0; i < vetLen; i++)
    {
        printf ("Elemento [%d] > ", i + 1);
        scanf ("%d", &vet[i]);
    }

    printf ("\nVettore crescente   >> {");
    for (i = 0; i < vetLen; i++)
        printf ("%3d ", vet[i]);
    printf ("};\n");

    for (i = 0, j = vetLen - 1; i <= j; i++, j--)
    {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }

    printf ("Vettore decrescente >> {");
    for (i = 0; i < vetLen; i++)
        printf ("%3d ", vet[i]);
    printf ("};\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021
