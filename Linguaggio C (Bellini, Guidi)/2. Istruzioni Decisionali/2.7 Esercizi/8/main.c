/* 16.
    Utilizzando l’espressione condizionale ?: scrivere un programma che, dati tre valori interi memorizzati nelle
    variabili a, b e c, assegna a d:

    • • il volume del parallelepipedo di lati a, b e c se il valore di a al quadrato sommato a b è diverso da c;
    • • la somma di a, b e c, altrimenti.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int a, b, c;    /* val. in input */
    int d;          /* val. finale */  


    /* assegnamento valore a */
    printf ("Inserire il valore di a > ");
    scanf ("%d", &a);

    /* assegnamento valore b */
    printf ("Inserire il valore di b > ");
    scanf ("%d", &b);

    /* assegnamento valore c */
    printf ("Inserire il valore di c > ");
    scanf ("%d", &c);

    /* valutazione di d */
    ((a * a + b) != c) ? (d = a * b * c) : (d = a + b + c);
 
    /* esito */
    printf ("d = %d;", d);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
