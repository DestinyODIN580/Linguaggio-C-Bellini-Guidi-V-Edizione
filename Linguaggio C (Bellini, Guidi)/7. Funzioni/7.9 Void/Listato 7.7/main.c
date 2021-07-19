/* 7.7 - Esempio di funzione "lavandino" */

#include <stdio.h>

#define DIM_INT 16

void stampa_bin (int);

int main(int argc, char const *argv[])
{
    char resp[2];
    int num;

    resp[0] = 's';


    while (resp[0] == 's')
    {
        printf ("\nInserisci un intero positivo: ");
        scanf ("%d", &num);

        printf ("La sua rappresentazione binaria e': ");

        stampa_bin (num);

        printf ("\nVuoi continuare? (s/n): ");
        scanf ("%s", resp);
    }


    printf ("\n");  
    return 0;
}

void stampa_bin (int v)
{
    char a[DIM_INT];

    int i, j;


    if (v == 0)
        printf ("%d", v);
    else
    {
        for (i = 0; v != 0; i++)
        {
            a[i] = v % 2;
            v /= 2;
        }

        for (j = i - 1; i >= 0; j--)
            printf ("%d", a[j]);
    }
}
// Marco Fiorillo 19/07/2021
