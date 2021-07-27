/* 104.
    Scrivere una funzione ricorsiva che accetti in ingresso n valori e ne restituisca la somma al programma chiamante.
*/

#include <stdio.h>

int totalSum (int, int);        /* somma di tutti i numeri inseriti */

int main (int argc, char const *argv[])
{   
    int n;                      /* totale numeri da inserire */


    /* assegnazione n */
    printf ("Quanti numeri si vogliono inserire > ");
    scanf ("%d", &n);

    /* esito */
    printf ("Somma di tutti i numeri inseriti >> %d;\n", totalSum (n, 1));

    printf ("\n");  
    return 0;
}

int totalSum (int n, int counter)
{
    int num;        /* numero corrente da sommare */


    /* somma */
    if (counter > n)
        return 0;
    else
    {
        printf ("Numero %d > ", counter);
        scanf ("%d", &num);
        return num + totalSum (n, counter + 1);
    }
}
// Marco Fiorillo 27/07/2021
