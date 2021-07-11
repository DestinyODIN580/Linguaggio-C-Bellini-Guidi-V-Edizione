/* 5.3 - Fusione di due array */

/* Fusione di due sequenze ordinate */

#include <stdio.h>

#define MAX_ELE 1000

int main (int argc, char const *argv[])
{
    char vet1[MAX_ELE];     /* prima sequenza */
    char vet2[MAX_ELE];     /* seconda sequenza */
    char vet3[MAX_ELE * 2]; /* merge */
    char aux;               /* variabile di appoggio per lo scambio */

    int n;                  /* lunghezza prima sequenza */
    int m;                  /* lunghezza seconda sequenza */
    int i, j, k, p, n1, m1;


    do
    {
        printf ("Lunghezza prima sequenza: ");
        scanf ("%d", &n);
    } while (n < 1 || n > MAX_ELE);
    
    /* caricamento prima sequenza */
    for (i = 0; i <= n - 1; i++)
    {
        printf ("vet1 %d° elemento: ", i + 1);
        scanf ("%1s", &vet1[i]);
    }

    do
    {
        printf ("Lunghezza seconda sequenza: ");
        scanf ("%d", &n);
    } while (n < 1 || n > MAX_ELE);

    /* caricamento seconda sequenza */
    for (i = 0; i <= n - 1; i++)
    {
        printf ("vet2 %d° elemento: ", i + 1);
        scanf ("%1s", &vet1[i]);
    }    

    /* ordinamento prima sequenza */
    p = n1 = m;
    do
    {
        k = 0;
        for (i = 0; i < n1 - 1; i++)
            if (vet1[i] > vet1[i + 1])
            {
                aux = vet1[i];
                vet1[i] = vet1[i + 1];
                vet1[i + 1] = aux;
                k = 1;
                p = i + 1;
            }
        n1 = p;
    } while (k);

    /* ordinamento seconda sequenza */
    p = m1 = m;
    do
    {
        k = 0;
        for (i = 0; i < m1 - 1; i++)
            if (vet2[i] > vet2[i + 1])
            {
                aux = vet2[i];
                vet2[i] = vet2[i + 1];
                vet2[i + 1] = aux;
                k = 1;
                p = i + 1;
            }
        m1 = p;
    } while (k);

    /* fusione delle due sequenze (merge) */
    i = j = k = 0;
    do
    {
        if (vet1[i] <= vet2[j])
            vet3[k++] = vet1[i++];
        else
            vet3[k++] = vet2[j++];
    } while (i < n && j < m);

    if (i < n)
        for (; i < n; vet3[k++] = vet1[i++]);
    else
        for (; j < m; vet3[k++] = vet2[i++]);

    /* visualizzazione della fusione */
    for (i = 0; i < k; i++)
        printf ("\n%c", vet3[i]);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/07/2021
