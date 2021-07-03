/* 4.
    Modificare il programma dell’esercizio precedente in modo che utilizzi le costanti A e B invece
    delle variabili a e b.
*/

#define A 18
#define B 7

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int y, x;     /* variabili per il calcolo */
    

    /* assegnazione di x */
    printf ("Inserire il valore di x > ");
    scanf ("%d", &x);

    /* esito */
    printf ("y = %d", y = x * A + B);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
