/* 119.
    Dato il seguente frammento di programma

        unsigned char c;
        c = ~'\351';
        printf("c: %o\n", c);
        
    che cosa visualizzerà la printf? E se al posto di '\351' avessimo scritto '\222' o '\123'?
*/

/* esito 
     o  =  d  =  b
    351 = 233 = 011101001
    222 = 146 = 010010010
    123 = 83  = 001010011

    (ottale)
    ~ 351 = 100010110 = 26
    ~ 222 = 101101101 = 159
    ~ 123 = 110101100 = 254
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{       
    unsigned char c1, c2;      /* var. per test 1 */
    unsigned char c3, c4;      /* var. per test 2 */
    unsigned char c5, c6;      /* var. per test 3 */

    c1 = '\351';
    c2 = ~ '\351';
    c3 = '\222';
    c4 = ~ '\222';
    c5 = '\123';
    c6 = ~ '\123';


    /* esito '\351' */
    printf ("\'\\351\' >> %o\n", c1);
    printf ("\'\\351\' >> %d\n", c1);

    printf ("\n");

    printf ("~\'\\351\' >> %o\n", c2);
    printf ("~\'\\351\' >> %d\n", c2);

    printf ("\n-----------------------------------\n\n");

    /* esito '\222' */
    printf ("\'\\222\' >> %o\n", c3);
    printf ("\'\\222\' >> %d\n", c3);

    printf ("\n");

    printf ("~\'\\222\' >> %o\n", c4);
    printf ("~\'\\222\' >> %d\n", c4);


    printf ("\n-----------------------------------\n\n");

    /* esito '\123' */
    printf ("\'\\123\' >> %o\n", c5);
    printf ("\'\\123\' >> %d\n", c5);

    printf ("\n");

    printf ("~\'\\123\' >> %o\n", c6);
    printf ("~\'\\123\' >> %d\n", c6);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
