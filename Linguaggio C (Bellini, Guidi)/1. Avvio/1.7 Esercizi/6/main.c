/* 6.
    Predisporre un programma che mostri chiaramente le diverse funzionalità delle sequenze di escape all’interno delle
    istruzioni printf.
*/

#include  <stdio.h>

int main (int argc, char const *argv[])
{
    /* esito */
    printf ("\\a --> segnale acustico;\a\n");
    printf ("\\b --> backspace;\b\n");
    printf ("\\f --> avanzamento carta;\f\n");
    printf ("\\n --> nuova riga;\n\n");
    printf ("\\r --> ritorno a capo;\r\n");
    printf ("\\t --> tabulazione orizzontale;\t\n");
    printf ("\\v --> tabulazione verticale;\v\n");
    printf ("\\\' --> virgoletta singola;\n");
    printf ("\\\" --> virgolette doppie;\n");
    printf ("\\\\ --> barra rovesciata;\n");
    printf ("\? --> punto interrogativo letterale;\n");

    
    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
