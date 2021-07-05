/* 3.8 - Programma per il calcolo dello zero di una funzione */

/* Determina lo zero della funzione f (x) = 2X^3 - 4X + 1 */

#include <stdio.h>
#include <math.h>

#define ERR 0.001

int main (int argc, char const *argv[])
{
    char x;

    float a, b, m;
    float fa, fb, fm;


    /* controllo validita' a, b */
    do
    {
        printf ("Inserire a: ");
        scanf ("%d", &a);

        printf ("Inserire b: ");
        scanf ("%d", &b);

        fa = 2 * a * a * a - 4 * a + 1; /* Calcolo della funzione per x = a */
        fb = 2 * b * b * b - 4 * b + 1; /* Calcolo della funzione per x = b */
    } while (fa * fb > 0);
    
    /* calcolo zero f */
    do
    {   
        m = (a + b) / 2;
        fm = 2 * m * m * m - 4 * m +1;  /* Calcolo della funzione per x = m */

        if (fm != 0)
        {
            fa = 2 * a * a * a - 4 * a + 1; /* Calcolo della funzione per x = a */ 
            fb = 2 * b * b * b - 4 * b + 1; /* Calcolo della funzione per x = b */

            if (fa * fm < 0)
                b = m;
            else
                a = m;

            fm = 2 * m * m * m - 4 * m +1;  /* Calcolo della funzione per x = m */
        }
    } while (fabs (fm) > ERR);

    printf ("Zero di f in %7.2f\n", m);
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
