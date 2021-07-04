/* 15.
    Supponendo che le variabili intere x, y abbiano valori 12, 45 e che le variabili carattere a e b abbiano valori
    “t” e “T”, le seguenti espressioni restituirebbero vero o falso?
    1)  (x>y) || (a!=b)
    2)  (y>x) && (a==b)
    3)  (a!=b) && !(x>y)
    4)  x || (y<x)
    5)  a == (b='t')
    6)  !x

    Scrivere un programma che verifichi le risposte date.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    char a, b;      /* variabili carattere*/

    int x, y;       /* variabili intere */
    int i;          /* contatore */

    a = 't';
    b = 'T';

    x = 12;
    y = 45;
    i = 0;


    /* esito */
    printf ("%d) (x > y) || (a != b)  >> %d;\n", ++i, (x > y) || (a != b));     /* 1 */
    printf ("%d) (y > x) && (a == b)  >> %d;\n", ++i, (y > x) && (a == b));     /* 0 */
    printf ("%d) (a != b) && !(x > y) >> %d;\n", ++i, (a != b) && !(x > y));    /* 1 */
    printf ("%d) x || (y < x)         >> %d;\n", ++i, x || (y < x));            /* 1 */
    printf ("%d) a ==  (b = 't')      >> %d;\n", ++i, a == (b = 't'));          /* 1 */
    printf ("%d) !x                   >> %d;\n", ++i, !x);                      /* 0 */


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
