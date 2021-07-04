/* 20.
    Scrivere un programma che, richiesto il numero AA rappresentante un anno, verifichi se questo è bisestile.
    [Suggerimento: un anno è bisestile se è divisibile per 4 ma non per 100 (cioè si escludono gli anni-secolo).]
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int AA;     /* anno */


    /* assegnazione di AA */
    printf ("Inserire l'anno > ");
    scanf ("%d", &AA);

    /* esito */
    ((AA % 4 == 0) && (AA % 100 != 0)) ? (printf ("L'anno e' bisestile")) : (printf ("L'anno non e' bisestile"));


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
