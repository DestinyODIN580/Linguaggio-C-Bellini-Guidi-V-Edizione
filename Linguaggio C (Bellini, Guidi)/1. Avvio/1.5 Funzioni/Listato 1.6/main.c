/* 1.6 - Esempio di utilizzo di una funzione predefinita */

/* Esempio di utilizzo di abs () */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const * argv[])
{
    int a, b, segmento, lunghezza;

    printf ("\n\nLUNGHEZZA SEGMENTO\n");
    printf ("Primo estremo: ");
    scanf ("%d", &a);

    printf ("Secondo estremo: ");
    scanf ("%d", &b);

    segmento = a - b;
    lunghezza = abs (segmento);

    printf ("Lunghezza segmento: %d\n", lunghezza);
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
