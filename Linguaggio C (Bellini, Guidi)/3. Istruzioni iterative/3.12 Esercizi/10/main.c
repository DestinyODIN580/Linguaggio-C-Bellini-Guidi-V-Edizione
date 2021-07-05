/* 33.
    Modificare il programma del presente capitolo che calcola lo zero della funzione in modo che consideri

    y = x ^ 3 -2
    nell’intervallo (0,2) con un errore minore di 0,00001.
*/

#include <stdio.h>
#include <math.h>

#define ERR 0.00001

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

        fa = a * a * a - 2; 
        fb = b * b * b - 2; 
    } while (fa * fb > 0);
    
    /* esito */
    do
    {   
        m = (a + b) / 2;
        fm = m * m * m - 2;  
        if (fm != 0)
        {
            fa = a * a * a - 2; 
            fb = b * b * b - 2; 

            if (fa * fm < 0)
                b = m;
            else
                a = m;

            fm = m * m * m - 2;  
        }
    } while (fabs (fm) > ERR);

    printf ("Zero di f in %7.2f\n", m);

    
    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
