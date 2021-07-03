/* 3.
    Trasformare il programma dell’esercizio precedente in modo che il valore di x venga richiesto all’utente
    in fase di esecuzione.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int y, x, a, b;     /* variabili per il calcolo */

    a = 18;
    b = 7;
    

    /* assegnazione di x */
    printf ("Inserire il valore di x > ");
    scanf ("%d", &x);

    /* esito */
    printf ("y = %d", y = x * a + b);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
