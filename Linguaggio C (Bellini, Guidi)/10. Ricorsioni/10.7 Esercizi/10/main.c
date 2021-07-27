/* 112
    Scrivere una versione ricorsiva della ricerca binaria su un vettore ordinato.
*/

#include <stdio.h>

#define LEN 100

int binarySearch (int[], int, int, int);        /* funzione ricorsiva della ricerca binaria */

int main (int argc, char const *argv[])
{
    int vet[LEN];                               /* vettore */
    int vetLen;                                 /* dimensione del vettore */
    int ele;                                    /* elemento da ricercare */
    int i;                                      /* contatore */


    /* assegnazione di vetLen */
    printf ("Inserire la lunghezza > ");
    scanf ("%d", &vetLen);


    /* costruzione di vet */
    for (i = 0; i < vetLen; i++)
    {
        printf ("Elemento [%d] > ", i + 1);
        scanf ("%d", &vet[i]);
    }

    /* assegnazione di ele */
    printf ("Elemento da cercare > ");
    scanf ("%d", &ele);

    /* esito */
    printf ("Elemento %d in posizione %d", ele, binarySearch (vet, vetLen, 0, ele));


    printf ("\n");
    return 0;
}

int binarySearch (int vet[], int top, int bottom, int ele)
{
    int i;                      /* indice corrente del vettore */

    i = (top + bottom) / 2;


    /* valutazione della sezione da analizzare */
    if (vet[i] == ele)
        return i;
    else if (bottom >= top)
        return - 1;
    else
    {
        if (vet[i] > ele)
            return binarySearch (vet, i - 1, bottom, ele);
        else
            return binarySearch (vet, top, i + 1, ele);
    }
}
// Marco Fiorillo 28/07/2021
