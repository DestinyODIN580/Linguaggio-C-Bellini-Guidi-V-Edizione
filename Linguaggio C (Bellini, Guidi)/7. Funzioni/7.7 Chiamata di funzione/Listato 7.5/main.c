/* 7.5 - Le funzioni come strumento di riutilizzo del codice */

#include <stdio.h>

double area (float, float, char);

int main (int argc, char const *argv[])
{
    float b, h;

    double tri, ret;


    printf ("\nInserire base: ");
    scanf ("%f", &b);
    printf ("\nInserire altezza: ");
    scanf ("%f", &h);

    tri = area (b, h, 'T');
    ret = area (b, h, 'R');

    printf ("Il triangolo (b = %f, h = %f) ha area %f\n", b, h, tri);
    printf ("Il rettangolo (b = %f, h = %f) ha area %f\n", b, h, ret);

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
