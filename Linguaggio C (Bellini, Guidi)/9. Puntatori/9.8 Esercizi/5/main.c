/* 101.
    Scrivere un programma che prenda in ingresso la dimensione di un buffer e la allochi dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
    int c;          /* carattere in ingresso */
    int i;          /* contatore */

    char *str;      /* stringa */

    i = 0;

    /* dimensione del buffer */
    while ((c = getchar ()) != '\n')
        i++;

    /* esito */
    str = malloc (sizeof (char) * i);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 25/07/2021
