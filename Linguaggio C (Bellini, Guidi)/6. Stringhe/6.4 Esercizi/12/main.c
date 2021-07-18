/* 76.
    Scrivere un programma che richieda all’utente una stringa e ne visualizzi una seconda, ottenuta dalla prima
    sostituendo tutte le lettere minuscole con delle maiuscole.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char str[LEN];  /* stringa */

    int c;          /* carattere in ingresso */
    int i;          /* contatore */

    i = 0;


    /* costruzione di str */
    printf ("Inserire la stringa >> ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* str a maiuscola */
    for (i = 0; i < strlen (str); i++)
        str[i] = toupper (str[i]);

    /* esito */
    printf ("Stringa in uppercase >> %s", str);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/07/2021
 