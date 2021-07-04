/* 12.
    Ripetere l'esercizio 1 ma individuando anche il minore dei tre numeri in input
*/

#include <stdio.h>

#define MAX 3

int main (int argc, char const *argv[])
{
    int maxNum;     /* numero massimo */
    int minNum;     /* numero minimo */
    int maxIndex;   /* indice del numero massimo */
    int minIndex;   /* indice del numero  minimo */
    int n;          /* numero in ingresso */
    int i;          /* contatore */

    maxIndex = minIndex = i = 0;


    /* assegnazione maxNum */
    printf ("Inserire il numero %d > ", i + 1);
    scanf ("%d", &maxNum);
    minNum = maxNum;

    /* determinazione di maxNum e maxIndex */
    for (i = 1; i < MAX; i++)
    {
        printf ("Inserire il numero %d > ", i + 1);
        scanf ("%d", &n);

        if (n > maxNum)
        {
            maxNum = n;
            maxIndex = i;
        }      
    
        if (n < minNum)
        {
            minNum = n;
            maxIndex = i;
        }
    }

    /* esito */
    printf ("Numero massimo     >> %d;\n", maxNum);
    printf ("Indice del massimo >> %d;\n", maxIndex + 1);
    printf ("Numero minimo      >> %d;\n", minNum);
    printf ("Indice del minimo  >> %d;\n", minIndex + 1);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021

