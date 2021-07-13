/* 65.
    Scrivere un programma che, senza utilizzare la libreria string.h, concateni a una stringa i primi cinque caratteri di
    una seconda stringa.
*/

#include <stdio.h>

#define LEN 100
#define N 5


int main (int argc, char const *argv[])
{   
    char str1[LEN];     /* stringa 1 */
    char str2[LEN];     /* stringa 2 */

    int str1Len;        /* lunghezza str1 */
    int str2Len;        /* lunghezza str2 */
    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = 0; 


    /* costruzione str1 */
    printf ("Prima stringa   >> ");
    while ((c = getchar ()) != '\n')
        str1[i++] = c;
    str1[str1Len = i] = '\0';

    /* costruzione str2 */
    printf ("Seconda stringa >> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        str2[i++] = c;
    str2[str2Len = i] = '\0';

    /* append primi N caratteri da str2 a str1 */
    for (i = str1Len, j = 0; i < (str1Len + N) && j < (str2Len); i++, j++)
        str1[i] = str2[j];
    str1[++i] = '\0';

    /* esito */
    printf ("Primi 5 caratteri in append >> %s\n", str1);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 13/07/2021
