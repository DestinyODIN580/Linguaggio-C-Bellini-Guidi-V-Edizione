/* 128.
    Scrivere un programma che apra un file e vi inserisca 80 caratteri,
*/

#include <stdio.h>

#define CHARS 80
#define LEN 80

int main (int argc, char const *argv[])
{
    char buffer[LEN];   /* buffer */

    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    FILE *file;           /* file */

    i = 0;

    
    /* esito */
    if ((file = fopen ("file.txt", "a+")) != NULL)
    {
        while ((c = getchar ()) && i < CHARS)
            buffer[i++] = c;
        buffer[i] = '\0';

        fprintf (file, "%s", buffer);
    }

    /* chiusura del file */
    fclose (file);

    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/09/2021
