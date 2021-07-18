/* 72.
    Scrivere un programma che richiesta all’utente una stringa controlli se vi compaiono almeno tre caratteri uguali
    consecutivi.
*/

#include <stdio.h>
#include <string.h>

#define LEN 100
#define CON 3

int main (int argc, char const *argv[])
{
    char str[LEN];      /* stringa */

    int consecutive;    /* flag */
    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = 0; 


    /* costruzione str */
    printf ("Inserire la stringa >> ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* valutazione di consecutive */
    for (consecutive = i = 0; i < strlen (str) && consecutive == 0; i++)
        for (consecutive = 1, j = 0; j < CON - 1; j++)
            if (str[i + j] != str[i + j + 1])
                consecutive = 0;

    /* esito */
    if (consecutive)
        printf (">> Vi sono 3 caratteri consecutivi nella stringa \"%s\"", str);
    else
        printf (">> Non vi sono 3 caratteri consecutivi nella stringa \"%s\"", str);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/07/2021
