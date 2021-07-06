/* 39.
    Scrivere un programma che, letti gli elementi di un vettore v1 e un numero k, determini l’elemento di v1 più
    prossimo a k.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet[LEN];           /* vettore */
    int vetLen;             /* lunghezza di vet */
    int i;                  /* contatore */
    int k;                  /* numero da ricercare */
    int nearValueNumber;    /* numero di vet piu'vicino a k */


    /* assegnazione di vetLen */
    printf ("Lunghezza del vettore > ");
    scanf ("%d", &vetLen);

    /* assegnazione di k */
    printf ("Valore di k > ");
    scanf ("%d", &k);

    /* costruzione di vet */
    for (i = 0; i < vetLen; i++)
    {
        printf ("Valore %d > ", i + 1);
        scanf ("%d", &vet[i]);
    }

    /* determinazione di nearValueNumber */
    for (i = 1, nearValueNumber = vet[0]; i < vetLen; i++)
        if (abs (k - vet[i]) < abs (k - nearValueNumber))
            nearValueNumber = vet[i];

    /* stampa del vettore */
    printf ("Vettore >> [ ");
    for (i = 0; i < vetLen; i++)
        printf ("%2d ", vet[i]);
    printf ("];\n");

    /* esito */
    printf ("Valore del vettore piu'vicino a k >> %d;", nearValueNumber);




    printf ("\n");
    return 0;
}
//
