/* 23.
    Scrivere un programma che, richiesti in input tre numeri interi, a seconda dei casi visualizzi una delle seguenti
    risposte:

    Tutti uguali
    Due uguali e uno diverso
    Tutti diversi
*/

#include <stdio.h>

#define MAX 3

int main (int argc, char const *argv[])
{
    int num;
    int n;          /* numero in ingresso */
    int i, j;          /* contatori */

    i = 0;


    /* assegnazione maxNum */
    printf ("Inserire il numero %d > ", i + 1);
    scanf ("%d", &num);

    /* determinazione di maxNum e maxIndex */
    for (i = j = 1; i < MAX; i++, j++)
    {
        printf ("Inserire il numero %d > ", i + 1);
        scanf ("%d", &n);

        if (n == num)
            j++;    
    }

    /* esito */
    switch (j)
    {
        case (1):
            printf ("Tutti diversi");
            break;

        case (2):
            printf ("Due uguali e uno diverso");
            break;

        case (3):
            printf ("Tutti uguali");
            break;

        default:
            break;
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
