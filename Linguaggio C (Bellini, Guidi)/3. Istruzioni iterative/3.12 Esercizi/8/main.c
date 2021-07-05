/* 31.
    Supponiamo che x, y, z e t siano variabili di tipo float e che a, b e c siano di tipo int. Determinare il
    valore di a e x dopo l’esecuzione delle seguenti istruzioni.

        y = 2.4;
        z = 7.0;
        b = 3;
        c = 7;
        t = 0.1E2;
        a = b * c + t / z;
        x = a / c + t / z * y;
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int a, b, c;        /* variabili intere */
    float t, x, y, z;   /* variabili reali */


    /* esito */
    printf ("y = %.1f;\n", y = 2.4);                  /* y = 2.4 */
    printf ("z = %.1f;\n", z = 7.0);                  /* z = 7.0 */
    printf ("b = %d;\n", b = 3);                      /* b = 3 */
    printf ("c = %d;\n", c = 7);                      /* c = 7 */
    printf ("t = %.1f;\n", t = 0.1E2);                /* t = 0.1E2 */
    printf ("a = %d;\n",  a = b * c + t / z);         /* a = 22 */
    printf ("x = %.1f;\n", x = a / c + t / z * y);    /* x = 6.4 */


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
