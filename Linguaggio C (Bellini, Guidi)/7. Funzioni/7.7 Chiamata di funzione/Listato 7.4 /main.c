/* 7.4 - Chiamata di funzione */

#include <stdio.h>

double area (float, float, char);

int main (int argc, char const *argv[])
{
    char p;

    float b, h;

    double a;


    printf ("Inserire poligono (Triangolo/Rettangolo): ");
    scanf ("%c", &p);

    printf ("\nInserire base: ");
    scanf ("%f", &b);
    printf ("\nInserire altezza: ");
    scanf ("%f", &h);

    a = area (b, h, p);

    printf ("Il poligono (b = %f, h = %f) ha area %f\n", b, h, a);


    printf ("\n");
    return 0;
}

double area (float base, float altezza, char poligono)
{
    switch (poligono)
    {
        case ('T'):
            return (base * altezza / 2.);
            break;
        
        case ('R'):
            return (base * altezza);
            break;

        default:
            return (-1);
            break;
    }
}
// Marco Fiorillo 19/07/2021
