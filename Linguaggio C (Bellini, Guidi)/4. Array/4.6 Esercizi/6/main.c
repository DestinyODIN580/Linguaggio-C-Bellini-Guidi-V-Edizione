/* 41.
    Scrivere un programma che, letti gli elementi di due vettori v1 e v2 di lunghezza n, inizializzi un terzo vettore w
    di lunghezza n con i valori

        w(i) = 1    se v1(i)>v2(i);
        w(i) = 0    se v1(i)=v2(i);
        w(i) = -1   se v1(i)<v2(i).
        
    Visualizzare quindi v1, v2 e w.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet1[LEN];      /* vettore 1 */
    int vet2[LEN];      /* vettore 2 */
    int vet3[LEN];      /* vettore 3 */
    int vetLen;         /* lunghezza dei vettori */
    int i;              /* contatori */


    /* assegnazione di vetLen */
    printf ("Inserire la lunghezza dei vettori > ");
    scanf ("%d", &vetLen);

    /* costruzione di vet1 */
    printf ("Vettore 1 \n");
    for (i = 0; i < vetLen; i++)
    {
        printf ("Inserire il valore %d > ", i + 1);
        scanf ("%d", &vet1[i]);
    }

    /* costruzione di vet2 */
    printf ("Vettore 2 \n");
    for (i = 0; i < vetLen; i++)
    {
        printf ("Inserire il valore %d > ", i + 1);
        scanf ("%d", &vet2[i]);
    }

    /* costruzione di vet3 */
    for (i = 0; i < vetLen; i++)
    {
        if (vet1[i] > vet2[i])
            vet3[i] = 1;

        else if (vet1[i] < vet2[i])
            vet3[i] = -1;
        
        else
            vet3[i] = 0;
    }

    /* stampa di vet1 */
    printf ("\nVettore 1 >> [ ");
    for (i = 0; i < vetLen; i++)
        printf ("%2d ", vet1[i]);
    printf ("];\n");

    /* stampa di vet2 */
    printf ("\nVettore 2 >> [ ");
    for (i = 0; i < vetLen; i++)
        printf ("%2d ", vet2[i]);
    printf ("];\n");

    /* esito */
    printf ("\nVettore 3 >> [ ");
    for (i = 0; i < vetLen; i++)
        printf ("%2d ", vet3[i]);
    printf ("];\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
