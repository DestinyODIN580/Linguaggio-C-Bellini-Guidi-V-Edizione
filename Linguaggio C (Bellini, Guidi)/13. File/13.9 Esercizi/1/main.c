/* 127.
    Scrivere un programma che legga e visualizzi il contenuto di un file ASCII
    per esempio autoexcec.bat
*/

#include <stdio.h>

#define LEN 100

char fileName[] = "autoexcec.bat";

int main (int argc, char const *argv[])
{
    int c;      /* carattere corrente del file */

    FILE *file; /* file */

    file = fopen (fileName, "r");


    /* esito */
    while (!feof(file))
    {
        while ((c = fgetc (file)) != '\n' && c != EOF)
            printf ("%c", c);
        printf ("\n");
    }

    /* chiusura del file */
    fclose (file);

    printf ("\n");
    return 0;
}
// Marco Fiorillo 31/08/2021
