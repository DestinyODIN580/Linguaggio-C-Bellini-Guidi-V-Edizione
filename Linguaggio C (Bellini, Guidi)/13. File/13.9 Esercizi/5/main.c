/* 131.
    Aprire un file ASCII, per esempio autoexec.bat, e
    leggere e visualizzare i primi 10 gruppi di caratteri
    separati da blank e newline.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char buffer[LEN];       /* buffer */

    int c;                  /* carattere del file */
    int i, j;               /* contatori */

    long fileSize;          /* totale dei caratteri di un file */

    FILE *fp;               /* puntatore al file */

    fp = fopen ("autoexcec.bat", "a+");

    
    /* valutazione della lunghezza del file e inizializzazione di fileSize */
    fseek (fp, 0L, SEEK_END);
    fileSize = ftell (fp);

    /* esito */
    if (fileSize)
        for (rewind(fp), i = j = 0; i < 10 && ftell (fp) <= fileSize; i++)
        {
            c = fgetc (fp);
            
            if (c != '\n' && c != ' ')
            {
                buffer[j++] = c;
                i--;
            }
            else
            {
                buffer[j] = '\0';
                printf ("%2d) >> %s\n", i + 1, buffer);
                j = 0;
            }
        }

    fclose (fp);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 15/09/2021
