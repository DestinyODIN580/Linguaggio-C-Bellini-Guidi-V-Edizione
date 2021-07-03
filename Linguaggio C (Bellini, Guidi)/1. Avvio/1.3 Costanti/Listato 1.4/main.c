/* 1.4 - Uso di costanti */

/* Calcolo area rettangolo, prova utilizzo costanti */

#include <stdio.h>

#define BASE 3
#define ALTEZZA 7

int main (int argc, char const *argv[])
{
    int area;

    area = BASE * ALTEZZA;


    printf ("Base: %d\n", BASE);
    printf ("Altezza: %d\n", ALTEZZA);
    printf ("Area: %d\n", area);
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 3/07/2021
