/* 11.1 - Visualizzazione della dimensione dei tipi fondamentali */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ch, in, sh, lo, fl, dd, ld;

    ch = sizeof (char);
    in = sizeof (int);
    sh = sizeof (short);
    lo = sizeof (long);
    fl = sizeof (float);
    dd = sizeof (double);
    ld = sizeof (long double);


    printf ("Dimensione di char        >> %d\n", ch);
    printf ("Dimensione di short       >> %d\n", sh);
    printf ("Dimensione di int         >> %d\n", in);
    printf ("Dimensione di long        >> %d\n", lo);
    printf ("Dimensione di float       >> %d\n", fl);
    printf ("Dimensione di double      >> %d\n", dd);
    printf ("Dimensione di long double >> %d\n", ld);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 29/07/2021
