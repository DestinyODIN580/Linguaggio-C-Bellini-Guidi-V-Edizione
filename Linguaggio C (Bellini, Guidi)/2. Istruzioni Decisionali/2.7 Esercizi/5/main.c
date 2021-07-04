/* 13.
    Se le variabili intere a, b, c hanno rispettivamente valore 5, 37, e 7, quale valore viene
    assegnato alla variabile ris dalle seguenti espressioni?

    1) ris = a+b*c
    2) ris = (a>b)
    3) ris = (a+b) * (a<b)
    4) ris = (a+b) && (a<b)
    5) ris = (a+b) || (a>b)
    6) ris = (a*c-b) || (a>b)
    7) ris = ((a*c) != b) || (a>b)
    8) ris = (a>b) || (a<c) || (c==b)

    Scrivere un programma che verifichi le risposte date.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int ris;    /* output */
    int a;      /* var. 1 */
    int b;      /* var. 2 */
    int c;      /* var. 3 */
    int i;      /* contatore */

    a = 5;
    b = 37;
    c = 7;
    i = 0;


    /* esito */
    printf ("%d) ris = %d;\n", ++i, ris = a + b * c);                       /* ris = 264 */
    printf ("%d) ris = %d;\n", ++i, ris = (a > b));                         /* ris = 0 */
    printf ("%d) ris = %d;\n", ++i, ris = (a + b) * (a < b));               /* ris = 42 */
    printf ("%d) ris = %d;\n", ++i, ris = (a + b) && (a < b));              /* ris = 1 */
    printf ("%d) ris = %d;\n", ++i, ris = (a + b) || (a > b));              /* ris = 1 */
    printf ("%d) ris = %d;\n", ++i, ris = (a * c - b) || (a > b));          /* ris = 1 */
    printf ("%d) ris = %d;\n", ++i, ris = ((a * c) != b) || (a > b));       /* ris = 1 */
    printf ("%d) ris = %d;\n", ++i, ris = (a > b) || (a < c) || (c == b));  /* ris = 1 */


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
