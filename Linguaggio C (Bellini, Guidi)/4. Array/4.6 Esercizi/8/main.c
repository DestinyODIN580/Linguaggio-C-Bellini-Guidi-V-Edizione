/* 43.
    Scrivere un programma di inizializzazione che richiesto un elemento controlli, prima di inserirlo nel vettore, se è
    già presente, nel qual caso chieda che l’elemento sia digitato di nuovo.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet[LEN];       /* vettore */
    int vetLen;         /* lunghezza di vet */
    int doubleCheck;    /* var. per la condizione di inserimento */
    int n;              /* var. per la condizione di inserimento */
    int i, j;           /* contatori */
    int out;            /* flag */


    /* assegnazione vetLen */
    printf ("Lunghezza del vettore > ");
    scanf ("%d", &vetLen);

    /* assegnazione vet */
    printf ("Inserire l'elemento %d > ", (i = 0) + 1);
    scanf ("%d", &vet[i]);

    /* costruzione di vet secondo le condizioni della traccia */
    for (++i; i < vetLen; i++)
    {
        printf ("Inserire l'elemento %d > ", i + 1);
        scanf ("%d", &n);

        for (j = out =  0; j < i; j++)
            if (n == vet[j])
                out++;

        if (out)
        {
            printf ("Numero %d gia'inserito > ", n);
            scanf ("%d", &doubleCheck);

            if (doubleCheck == n)
                vet[i] = n;

            else
                i--;
        }

        else
            vet[i] = n;
    }
    
    /* esito */
    printf ("\nVettore >> [ ");
    for (i = 0; i < vetLen; i++)
        printf ("%2d ", vet[i]);
    printf (" ];");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 7/07/2021
