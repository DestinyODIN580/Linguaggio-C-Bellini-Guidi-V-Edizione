/* 11.2 - Copia su stringa */

#include <stdio.h>

int i = 80;

double d = 3.12546;

int main(int argc, char const *argv[])
{
    char bufusc[81];

    int numusc;


    numusc = sprintf (bufusc, "Il valore di i = %d e il valore di d = %g\n", i, d);

    printf ("Sprintf () ha scritto %d caratteri e il buffer contiene \n%s", numusc, bufusc);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
