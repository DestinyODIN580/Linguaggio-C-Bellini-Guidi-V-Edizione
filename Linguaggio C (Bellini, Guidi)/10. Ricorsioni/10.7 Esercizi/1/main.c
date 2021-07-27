/* 103.
    Modificare la funzione ricorsiva che calcola il fattoriale in modo che venga stampato il valore dei fattoriali di tutti i
    numeri minori o uguali a n.
*/

#include <stdio.h>

int factorial (int, int);               /* funzione ricorsiva del fattoriale di tutti i numeri <= n */

int main (int argc, char const *argv[])
{   
    int fat;        /* fattoriale */


    /* assegnazione di fat */
    printf ("Inserire il numero di cui calcolare il fattoriale > ");
    scanf ("%d", &fat);

    /* esito */
    printf ("%d >> %d;\n", fat, factorial (1, fat));


    printf ("\n");
    return 0;
}

int factorial (int base, int input)
{
    int fat;            /* fattoriale */
    int i;              /* contatore */


    /* caso base o ricorsione */
    if (base == input)
        return input;
    else
    {
        printf ("%d >> ", base);
        for (fat = i = 1; i <= base; i++)
            fat *= i;
        printf ("%d;\n", fat);

        return base * factorial (base + 1, input);
    }
}
// Marco Fiorillo 27/07/2021
