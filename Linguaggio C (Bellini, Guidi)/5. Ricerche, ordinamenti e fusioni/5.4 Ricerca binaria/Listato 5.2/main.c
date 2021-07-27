/* 5.2 - Programma completo di immissione, ordinamento e ricerca */

/* Ricerca binaria */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    char vet[6];            /* array contenente i caratteri immessi */
    char aux;               /* variabile di appoggio per lo scambio */
    char ele;               /* elemento da ricercare */

    int basso, alto, pos;   /* usati per la ricerca binaria */
    int i, n, k, p;


    /* Immissione caratteri */
    n = 6;
    for (i = 0; i <= n - 1; i++)
    {
        printf ("vet %d° elemento: ", i + 1);
        scanf ("%1s", &vet[i]);
    }

    /* ordinamento ottimizzato */
    p = n;
    do
    {
        k = 0;
        for (i = 0; i < n - 1; i++)
            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
                k = 1;
                p = i + 1;
            }
        n = p;
    } while (k);

    printf ("\nElemento da ricercare: ");
    scanf ("%1s", &ele);

    /* ricerca binaria */
    n = 6;
    alto = 0;
    basso = n - 1;
    pos = -1;
    do
    {
        i = (alto + basso) / 2;
        if (vet[i] == ele)
            pos = i;
        else
            if (vet[i] < ele)
                alto = i + 1;
            else
                basso = i - 1;
    } while (alto <= basso && pos == -1);

    if (pos != -1)
        printf ("\nElemento %c non presente in posizione %d\n", ele, pos);
    else
        printf ("\nElemento non presente! %d\n", pos);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/07/2021
