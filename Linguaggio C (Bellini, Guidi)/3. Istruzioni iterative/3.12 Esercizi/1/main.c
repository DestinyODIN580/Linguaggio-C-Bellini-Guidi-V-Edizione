/* 24.
    Predisporre un programma che calcola il valore dei fattoriali di tutti i numeri interi minori uguali a n. 
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int n;      /* numero massimo del fattoriale */
    int fat;    /* fattoriale */
    int i;   /* contatori */


    /* assegnazione di n */
    printf ("Inserire il valore di n > ");
    scanf ("%d", &n);

    /* esito */
    for (i = fat = 1; i <= n; i++)
        printf ("\nFattoriale di %d >> %d", i , fat *= i);
        

    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
