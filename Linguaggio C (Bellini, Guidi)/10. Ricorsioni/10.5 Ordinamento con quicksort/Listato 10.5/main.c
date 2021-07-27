/* 10.5 - Ordinamento di una sequenza con il metodo quicksort */

/* Ordinamento quicksort di un array di int */

#include <stdio.h>

#define N 10        /* numero di elementi dell'array */

void quick (int, int);
void scambia (int *, int *);

int v[N];           /* array contenente gli interi immessi */

int main(int argc, char const *argv[])
{
    int i;


    for (i = 0; i < N; i++)
    {
        printf ("\nImmettere un intero n.%d: ", i);
        scanf ("%d", &v[i]);
    }   

    quick (0, N - 1);       /* chiamata della procedura quick */

    for (i = 0; i < N; i++) /* sequenza ordinata */
        printf ("\n%d", v[i]);
    putchar ('\n');


    printf ("\n");
    return 0;
}

void quick (int sin, int des)
{
    int i, j, media;

    media = (v[sin] + v[des]) / 2;
    i = sin;
    j = des;


    do
    {
        while (v[i] < media)
            i++;
        while (media < v[j])
            j--;

        if (i <= j)
        {
            scambia (&v[i], &v[j]);
            i++;
            j--;
        }
    } while (j >= i);

    if (sin < j)
        quick (sin, j);     /* invocazione ricorsiva */
    if (i < des)
        quick (i, des);     /* invocazione ricordiva */
}

void scambia (int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
// Marco Fiorillo 27/07/2021
