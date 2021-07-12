/* 61.
    Scrivere un programma che, richiesti all’utente i primi n−1 elementi già ordinati di un vettore di dimensione n e un
    ulteriore elemento finale, inserisca quest’ultimo nella posizione corretta facendo scivolare verso il basso tutti gli
    elementi più grandi.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet[LEN];           /* vettore */
    int vetLen;             /* lunghezza di vet */
    int elem;               /* ultimo elemento */
    int i, j;               /* contatori */


    /* assegnazione di vetLen */
    printf ("Lunghezza del vettore > ");
    scanf ("%d", &vetLen);

    /* costruzione di vet */
    for (i = 0; i < vetLen - 1; i++)
    {
        printf ("Elemento %d > ", i + 1);
        scanf ("%d", &vet[i]);
    }

    /* assegnazione di elem */
    printf ("Ultimo elemento > ");
    scanf ("%d", &elem);
    
    /* ricerca della posizione in cui inserire elem */
    for (i = 0; vet[i] < elem && i < vetLen - 1; i++);

    /* shifting */
    for (j = vetLen; j >= i; j--)
        vet[j] = vet[j - 1];

    /* integrazione di elem in vet */
    vet[i] = elem;

    /* esito */
    printf ("Vettore >> { ");
    for (i = 0; i < vetLen; i++)
        printf ("%d ", vet[i]);
    printf ("};\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021
