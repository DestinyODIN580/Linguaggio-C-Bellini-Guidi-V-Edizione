/* 71.
    Scrivere un programma che controlli se una stringa richiesta all’utente è palindroma. (Una stringa si dice palindroma
    se si legge nello stesso modo da sinistra verso destra e da destra verso sinistra. Sono esempi di stringhe palindrome:
    ANNA, radar, anilina.)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char str[LEN];      /* parola da valutare */

    int palindrome;     /* flag */
    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = 0;


    /* costruzione di str */
    printf ("Inserire una parola >> ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* tolower di str */
    for (i = 0; i < strlen (str); i++)
        str[i] = tolower (str[i]);

    /* valutazione di palindrome */
    for (palindrome = 1,  i = 0, j = strlen (str) - 1; i <= j; i++, j--)
        if (str[i] != str[j])
            palindrome = 0;

    /* esito */
    if (palindrome)
        printf (">> %s e'palindroma", str);
    else
        printf (">> %s non e'palindroma", str);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/07/2021
