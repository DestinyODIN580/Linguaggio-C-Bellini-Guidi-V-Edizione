/* 11.
    Ripetere l’Esercizio 2 nell’ipotesi che i quattro valori possano anche essere tutti uguali, caso nel quale il
    messaggio da visualizzare dev’essere Valori identici.    
*/

#include <stdio.h>

#define MAX 4

int main (int argc, char const *argv[])
{
    int maxNum;     /* numero massimo */
    int maxIndex;   /* indice del numero massimo */
    int n;          /* numero in ingresso */
    int out;
    int i;          /* contatore */

    maxIndex = out = i = 0;


    /* assegnazione maxNum */
    printf ("Inserire il numero %d > ", i + 1);
    scanf ("%d", &maxNum);

    /* determinazione di maxNum e maxIndex */
    for (i = 1; i < MAX; i++)
    {
        printf ("Inserire il numero %d > ", i + 1);
        scanf ("%d", &n);

        if (n != maxNum)
            out = 1;

        if (n > maxNum)
        {
            maxNum = n;
            maxIndex = i;
        }      
    }

    /* esito */
    if (out)
        printf ("Valori identici;\n");
        
    printf ("Numero massimo >> %d;\n", maxNum);
    printf ("Indice         >> %d;\n", maxIndex + 1);
    


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
