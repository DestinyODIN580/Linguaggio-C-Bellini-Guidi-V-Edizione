/* 5.1 - Ricerca completa */

/* Ricerca sequenziale di un valore nel vettore */

#include <stdio.h>

#define MAX_ELE 1000    /* massimo numero di elementi */

int main (int argc, char const *argv[])
{
    char vet[MAX_ELE];
    char c;

    int i, n;    


    /* Immissione lunghezza della sequenza */
    do
    {
        printf ("\nNumero di elementi: ");
        scanf ("%d", &n);
    } while (n < 1 || n > MAX_ELE);

    /* Immissione elementi della sequenza */
    for (i = 0; i < n; i++)
    {
        printf ("\nImmettere carattere n.%d: ", i);
        scanf ("%1s", &vet[i]);
    }

    printf ("Elemento da ricercare: ");
    scanf ("%1s", &c);

    /* Ricerca sequenziale */
    i = 0; 
    while (c != vet[i] && i < n - 1) 
        i++;

    if (c == vet[i])
        printf ("\nElemento %c presente in posizione %d\n", c, i);
    else
        printf ("\nElemento non presente!\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/07/2021
