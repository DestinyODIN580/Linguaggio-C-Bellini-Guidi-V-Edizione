/* 117.
    Dato il seguente frammento di programma
    unsigned char c;
    c = '\166' & '\360';
    printf("c: %o\n", c);

    che cosa visualizzerà la printf, e perché? E se al posto di '\166' avessimo scritto '\100' oppure '\0' oppure
    '\111' o '\110'?
*/

/* esito 
     o  =  d  =  b
    166 = 118 = 001110110
    360 = 160 = 011110000
    100 = 64  = 001000000
    0   = 0   = 000000000
    111 = 73  = 001001001
    110 = 72  = 001001000

    (ottale)
    166 & 360 = 001110000 = 160
    100 & 360 = 001000000 = 100
    0   & 360 = 000000000 = 0
    111 & 360 = 001000000 = 100
    110 & 360 = 001000000 = 100

*/


#include <stdio.h>

int main (int argc, char const *argv[])
{
    unsigned char c1 = '\166';  /* test 1 */
    unsigned char c2 = '\360';
    unsigned char c3 = c1 & c2;

    unsigned char c4 = '\100';  /* test 2 */
    unsigned char c5 = '\360';
    unsigned char c6 = c4 & c5;

    unsigned char c7 = '\0';    /* test 3 */
    unsigned char c8 = '\360';
    unsigned char c9 = c7 & c8;

    unsigned char c10 = '\111'; /* test 4 */
    unsigned char c11 = '\360';
    unsigned char c12 = c10 & c11;

    unsigned char c13 = '\110'; /* test 5 */
    unsigned char c14 = '\360';
    unsigned char c15 = c13 & c14;


    /* esito '\166' */
    printf ("\'\\166\' >> %o\n", c1);
    printf ("\'\\166\' >> %d\n", c1);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c2);
    printf ("\'\\360\' >> %d\n", c2);

    printf ("\n");

    printf ("\'\\166\' & \'\\360\' >> %o\n", c3);
    printf ("\'\\166\' & \'\\360\' >> %d\n", c3);

    printf ("\n-----------------------------------\n\n");

    /* esito '\100' */
    printf ("\'\\100\' >> %o\n", c4);
    printf ("\'\\100\' >> %d\n", c4);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c5);
    printf ("\'\\360\' >> %d\n", c5);

    printf ("\n");

    printf ("\'\\100\' & \'\\360\' >> %o\n", c6);
    printf ("\'\\100\' & \'\\360\' >> %d\n", c6);

    printf ("\n-----------------------------------\n\n");

    /* esito '\0' */
    printf ("\'\\0\' >> %o\n", c7);
    printf ("\'\\0\' >> %d\n", c7);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c8);
    printf ("\'\\360\' >> %d\n", c8);

    printf ("\n");

    printf ("\'\\0\' & \'\\360\' >> %o\n", c9);
    printf ("\'\\0\' & \'\\360\' >> %d\n", c9);

    printf ("\n-----------------------------------\n\n");

    /* esito '\111' */
    printf ("\'\\111\' >> %o\n", c10);
    printf ("\'\\111\' >> %d\n", c10);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c11);
    printf ("\'\\360\' >> %d\n", c11);

    printf ("\n");

    printf ("\'\\111\' & \'\\360\' >> %o\n", c12);
    printf ("\'\\111\' & \'\\360\' >> %d\n", c12);

    printf ("\n-----------------------------------\n\n");

    /* esito '\100' */
    printf ("\'\\110\' >> %o\n", c13);
    printf ("\'\\110\' >> %d\n", c13);

    printf ("\n");

    printf ("\'\\360\' >> %o\n", c14);
    printf ("\'\\360\' >> %d\n", c14);

    printf ("\n");

    printf ("\'\\110\' & \'\\360\' >> %o\n", c15);
    printf ("\'\\110\' & \'\\360\' >> %d\n", c15);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
