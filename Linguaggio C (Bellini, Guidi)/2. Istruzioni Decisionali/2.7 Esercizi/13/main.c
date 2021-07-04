/* 21.
    Scrivere un programma che, richiesti i numeri GG, MM, AA di una data, verifichi se questa è valida.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int GG;         /* giorno */
    int MM;         /* mese */
    int AA;         /* anno */
    int out;        /* contatore */

    out = 0;


    /* assegnazione di GG */
    printf ("Inserire il giorno > ");
    scanf ("%d", &GG);

    /* assegnazione di MM */
    printf ("Inserire il mese > ");
    scanf ("%d", &MM);

    /* assegnazione di AA */
    printf ("Inserire l'anno > ");
    scanf ("%d", &AA);

    /* valutazione se la data e' valida o meno */
    if (GG > 31 || GG < 1)
        out = 1;

    else if (GG > 30 && (MM == 4 || MM == 6 || MM == 9 || MM == 11))
        out = 1;

    else if (GG > 29 && MM == 2 && (AA % 4 == 0) && (AA % 100 != 0))
        out = 1;
        
    else if (GG > 28 && MM == 2)
        out = 1;
    
    /* esito */
    if (!out)
        printf ("La data e'valida");
    else
        printf ("La data non e'valida");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
