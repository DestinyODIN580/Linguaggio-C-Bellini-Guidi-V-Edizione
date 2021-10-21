/* 175.
    Realizzare un CGI che legga lo stato attuale da un file di log e lo presenti in forma di pagine HTML.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    FILE *fp;   /* file da cui leggere i dati */

    fp = fopen ("log.txt", "r");


    /* esito */
    while ((!feof (fp)))
        fputc ("%c", fp);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 21/10/2021 
