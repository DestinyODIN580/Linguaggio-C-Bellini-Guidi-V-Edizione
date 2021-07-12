/* 58.
    Verificare il comportamento del programma di fusione applicato ai seguenti vettori:

    vet1 = [ 3, 31, 41, 43, 44, 45, 80 ]
    vet2 = [ 5, 8, 21, 23, 46, 51, 60, 66 ]

*/

#include <stdio.h>

#define MAX_ELE 8

int main(int argc, char const *argv[])
{
    int vet1[MAX_ELE - 1] = { 3, 31, 41, 43, 44, 45, 80};     /* prima sequenza */
    int vet2[MAX_ELE] = { 5, 8, 21, 23, 46, 51, 60, 66};      /* seconda sequenza */
    int vet3[MAX_ELE * 2 - 1];                                /* merge */
    int n;                                                    /* lunghezza prima sequenza */
    int m;                                                    /* lunghezza seconda sequenza */
    int i, j, k;                                              /* contatori */

    i = j = k = 0;
    n = MAX_ELE - 1;
    m = MAX_ELE;


    /* esito */
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
    printf ("\nVettore >> { ");
    for (i = 0; i < k; i++)
        printf ("%d ", vet3[i]);
    printf ("};\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/07/2021
