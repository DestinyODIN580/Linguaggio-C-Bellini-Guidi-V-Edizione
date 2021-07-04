/* 2.1 - Esempio di diramazione del flusso di esecuzione */

/* Utilizzo if-else */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int i;


    printf ("Dammi un intero: ");
    scanf ("%d", &i);

    if (i < 100)
        printf ("minore di 100\n");
    else
        printf ("maggiore o uguale a 100\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
