/* 66.
    Scrivere un programma che confronti due stringhe, limitatamente ai primi cinque caratteri, e successivamente visualizzi il risultato del
    confronto. Il programma non deve utilizzare la libreria string.h.
*/

#include <stdio.h>
#include <ctype.h>

#define LEN 100
#define N 5

int main (int argc, char const *argv[])
{
    char str1[LEN];     /* stringa 1 */
    char str2[LEN];     /* stringa 2 */

    int str1Len;        /* lunghezza str1 */
    int str2Len;        /* lunghezza str2 */
    int c;              /* carattere */
    int i;              /* contatore */

    i = 0;


    /* costruzione di str1 e assegnazione di str1Len */
    printf ("Prima stringa   >> ");
    while ((c = getchar ()) != '\n')
        str1[i++] = c;
    str1[i] = '\0';
    str1Len = i - 1;

    /* costruzione di str2 e assegnazione di str2Len */
    printf ("Seconda stringa >> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        str2[i++] = c;
    str2[i] = '\0';
    str2Len = i - 1; 

    /* lowercase delle stringhe (A != a) */
    for (i = 0; i < str1Len; i++)
        str1[i] = tolower (str1[i]);

    for (i = 0; i < str2Len; i++)
        str2[i] = tolower (str2[i]);

    /* check dei primi N caratteri */
    for (i = 0; (str1[i] == str2[i]) && (i < str2Len) && (i < str1Len) && (i < N); i++);

    /* esito */
    if (str1[i] > str2[i])
        printf ("La prima e'maggiore della seconda");
    else if (str1[i] < str2[i])
        printf ("La seconda e'maggiore della prima");
    else
        printf ("Uguali per i primi %d caratteri", N);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 13/07/2021
