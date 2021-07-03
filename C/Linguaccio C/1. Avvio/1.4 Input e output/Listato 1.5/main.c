/* 1.5 - Immissione di valori */

/* Calcolo area rettangolo */

#include <stdio.h>

int base, altezza, area;

int main (int argc, char const * argv[])
{
    printf ("AREA RETTANGOLO\n\n");

    printf ("Valore base: ");
    scanf ("%d", &base);

    printf ("Valore altezza: ");
    scanf ("%d", &altezza);

    area = base * altezza;

    printf ("Base: %d\n", base);
    printf ("Altezza: %d\n", altezza);
    printf ("Area: %d\n", area);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 3/07/2021
