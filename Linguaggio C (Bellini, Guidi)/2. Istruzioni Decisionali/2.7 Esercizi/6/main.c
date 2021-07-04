/* 14.
    Se  le  variabili  interea, b e c  avessero  gli  stessi  valori  di  partenza  dell’esercizio
    precedente,  le  seguenti espressioni restituirebbero vero o falso?
    
    1)    (a>b) || (c>a))
    2)    (c>a) && (a>b))
    3)    !(a>b) && (c>a))
    4)    !(a>b) || !(c>a))
    5)    (a==c) || ((a<b) && (b<c))
    6)    (a!=c) || ((a<b) && (b<c))

    Scrivere un programma che verifichi le risposte date.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int a;      /* var. 1 */
    int b;      /* var. 2 */
    int c;      /* var. 3 */
    int i;      /* contatore */

    a = 5;
    b = 37;
    c = 7;
    i = 0;


    /* esito */
    printf ("%d) (a > b) || (c > a)              >> %d;\n", ++i, (a > b) || (c > a));               /* 1 */
    printf ("%d) (c > a) && (a > b)              >> %d;\n", ++i, (c > a) && (a > b));               /* 0 */
    printf ("%d) !(a > b) && (c > a)             >> %d;\n", ++i, !(a > b) && (c > a));              /* 1 */
    printf ("%d) !(a > b) || !(c > a)            >> %d;\n", ++i, !(a > b) || !(c > a));             /* 1 */
    printf ("%d) (a == c) || ((a < b) && (b < c) >> %d;\n", ++i, (a == c) || ((a < b) && (b < c))); /* 0 */
    printf ("%d) (a != c) || ((a < b) && (b < c) >> %d;\n", ++i, (a != c) || ((a < b) && (b < c))); /* 1 */


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
