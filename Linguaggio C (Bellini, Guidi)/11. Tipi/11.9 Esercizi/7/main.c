/* 121.
    Se la variabile c è di tipo unsigned char, quali valori stampano le due printf del seguente frammento di
    programma?

        c = '\321';
        c = c >> 1;
        printf("c: %o\n", c);
        c = '\321';
        c = c << 1;
        printf("c: %o\n", c);    
*/

/* esito

    (ottale)
    321  = 011010001
    >> 1 = 001101000 = 150
    << 1 = 110100010 = 242

*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    unsigned char c;    /* var. per i test */

    c = '\321';

    
    /* esito */
    printf ("c = c >> 1 >> %o\n", c = c >> 1);
    c = '\321';
    printf ("c = c << 1 >> %o\n", c = c << 1);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
