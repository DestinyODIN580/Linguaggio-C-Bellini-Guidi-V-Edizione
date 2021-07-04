/* 7.
    Determinare il valore assunto dalle variabili a, b e c al termine della successiva sequenza di istruzioni:
    a = -2;
    b = a + 1;
    b = b - abs (a);
    c = a * b;
    b = 3;
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int a, b, c;        /* variabili da valutare */


    /* sequenza di istruzioni */
    a = -2;
    b = a + 1;
    b = b - abs (a);
    c = a * b;
    b = 3;

    /* esito a = -2 */
    printf ("a = %d\n", a);

    /* esito b = 3 */
    printf ("b = %d\n", b);

    /* esito c = -6 */
    printf ("c = %d\n", c);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
