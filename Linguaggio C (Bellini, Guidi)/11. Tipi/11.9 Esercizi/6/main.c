/* 120.
    Se la variabile c di tipo unsigned char ha valore '\123', quali valori stamperebbe l’istruzione printf("c:
    %o\n", c) dopo ognuno dei seguenti singoli assegnamenti?

    c = c >> 1;
    c = c >> 2;
    c = c >> 3;
    c = c << 1;
    c = c << 2;
    c = c << 3;

*/

/* esito 

    (ottale)
    >> 1 001010011 --> 000101001 = 51
    >> 2 000101001 --> 000001010 = 12
    >> 3 000001010 --> 000000001 = 1
    >> 4 000000001 --> 000000010 = 2
    >> 5 000000010 --> 000001000 = 10
    >> 6 000001000 --> 001000000 = 100

*/


#include <stdio.h>

int main (int argc, char const *argv[])
{   
    unsigned char c;    /* var. per i test */

    c = '\123';


    /* esito */
    printf ("c = c >> 1; >> %o\n", c = c >> 1);
    printf ("c = c >> 2; >> %o\n", c = c >> 2);
    printf ("c = c >> 3; >> %o\n", c = c >> 3);
    printf ("c = c << 1; >> %o\n", c = c << 1);
    printf ("c = c << 2; >> %o\n", c = c << 2);
    printf ("c = c << 3; >> %o\n", c = c << 3);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
