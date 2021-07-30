/* 118.
    Dato il seguente frammento di programma

        unsigned char c;
        c = '\111' ^ '\360';
        printf("c: %o\n", c);

    che cosa visualizzerà la printf, e perché? E se al posto di '\111' avessimo scritto '\321' o '\350'?
*/

/* esito 
     o  =  d  =  b
    111 = 73  = 001001001
    360 = 160 = 011110000
    321 = 209 = 011010001
    350 = 232 = 011101000

    (ottale)
    111 ^ 360 = 010111001 = 271
    321 ^ 360 = 000100001 = 41
    350 ^ 160 = 000011000 = 30
*/
#include <stdio.h>

int main (int argc, char const *argv[])
{
    unsigned char c1, c2, c3;  /* var. per test 1 */
    unsigned char c4, c5, c6;  /* var. per test 2 */
    unsigned char c7, c8, c9;  /* var. per test 3 */

    c1 = '\111';
    c2 = '\360';
    c3 = c1 ^ c2;
    c4 = '\321';
    c5 = '\360';
    c6 = c4 ^ c5;
    c7 = '\350';
    c8 = '\360';
    c9 = c7 ^ c8;


    /* esito '\111' */
    printf ("\'\\111\' >> %o\n", c1);
    printf ("\'\\111\' >> %d\n", c1);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c2);
    printf ("\'\\360\' >> %d\n", c2);

    printf ("\n");

    printf ("\'\\111\' ^ \'\\360\' >> %o\n", c3);
    printf ("\'\\111\' ^ \'\\360\' >> %d\n", c3);

    printf ("\n-----------------------------------\n\n");

    /* esito '\321' */
    printf ("\'\\321\' >> %o\n", c4);
    printf ("\'\\321\' >> %d\n", c4);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c5);
    printf ("\'\\360\' >> %d\n", c5);

    printf ("\n");

    printf ("\'\\321\' ^ \'\\360\' >> %o\n", c6);
    printf ("\'\\321\' ^ \'\\360\' >> %d\n", c6);

    printf ("\n-----------------------------------\n\n");

    /* esito '\350' */
    printf ("\'\\350\' >> %o\n", c7);
    printf ("\'\\350\' >> %d\n", c7);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c8);
    printf ("\'\\360\' >> %d\n", c8);

    printf ("\n");

    printf ("\'\\350\' ^ \'\\360\' >> %o\n", c9);
    printf ("\'\\350\' ^ \'\\360\' >> %d\n", c9);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
