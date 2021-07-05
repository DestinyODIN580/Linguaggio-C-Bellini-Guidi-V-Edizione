/* 25.
    Predisporre un programma, che determini il maggiore, il minore e la media degli n valori immessi dall’utente.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int i, j;       /* contarori */

    float max;      /* massimo */
    float min;      /* minimo */
    float avg;      /* media */
    float sum;      /* somma */
    float n;        /* var. in input */

    i = 1;

        
    /* assegnazione di n */
    printf ("Quanti numeri si vogliono inserire > ");
    scanf ("%d", &j);

    /* determinazione di max, min, sum */
    while (j > 0)
    {
        printf ("Inserire il numero %d > ", i++);
        scanf ("%f", &n); 

        for (max = min = sum = n; i <= j; i++)
        {
            printf ("Inserire il numero %d > ", i + 1);
            scanf ("%f", &n);

            if (n > max)
                max = n;

            if (n < min)
                min = n;

            sum += n;
        }
        
        /* esito */
        printf ("\nMaggiore >> %.2f;", max);
        printf ("\nMinore   >> %.2f;", min);
        printf ("\nMedia    >> %.2f;", avg = sum / j);

        j = 0;
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
