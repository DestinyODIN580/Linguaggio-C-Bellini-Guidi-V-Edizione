/* 32
    Tradurre i seguenti numeri in rappresentazione decimale nella corrispondente notazione esponenziale:

        a) 123.456;
        b) 2700000;
        c) 0.99999999;
        d) 0.07.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    float a, b, c, d;   /* variabili da rappresentare */

    a = 23.456;
    b = 2700000;
    c = 0.99999999;
    d = 0.07;


    /* esito */
    printf ("a = %.1e;\n", a);
    printf ("b = %.1e;\n", b);
    printf ("c = %.1e;\n", c);
    printf ("d = %.1e;\n", d);


    printf ("\n");
    return 0;
}
