/* 82.
    Modificare il programma del Listato 3.8, che calcola uno zero della funzione matematica f(x) = 2x 3 −4x+1, in modo
    che utilizzi una funzione per determinare i valori di f.
*/

#include <stdio.h>
#include <math.h>

#define ERR 0.001

int fVal (int, int);

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
    
    /* esito */
    printf ("Zero di f in %7.2f\n", fVal (a, b));
    

    printf ("\n");
    return 0;
}

int fVal (int a, int b)
{
    int fm, m;                              /* valori m e f di m */
    int fa, fb;                             /* valori di f per a e b */


    do
    {   
        m = (a + b) / 2;
        fm = 2 * m * m * m - 4 * m +1;      /* Calcolo della funzione per x = m */

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


    return m;
}
// Marco Fiorillo 20/07/2021
