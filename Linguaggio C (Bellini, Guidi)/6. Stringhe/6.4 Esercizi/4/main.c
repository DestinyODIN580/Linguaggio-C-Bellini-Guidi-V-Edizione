/* 68.
    Scrivere un programma che ottenga lo stesso effetto richiesto nell’Esercizio 2 ma con l’utilizzo della funzione
    strncmp della libreria string.h.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN 100
#define N 5

int main (int argc, char const *argv[])
{
    char str1[LEN];     /* stringa 1 */
    char str2[LEN];     /* stringa 2 */

    int val;            /* ritorno del confronto */
    int c;              /* carattere */
    int i;              /* contatore */

    i = 0;


    /* costruzione di str1 e assegnazione di str1Len */
    printf ("Prima stringa   >> ");
    while ((c = getchar ()) != '\n')
        str1[i++] = c;
    str1[i] = '\0';

    /* costruzione di str2 e assegnazione di str2Len */
    printf ("Seconda stringa >> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        str2[i++] = c;
    str2[i] = '\0'; 

    /* lowercase delle stringhe (A != a) */
    for (i = 0; i < strlen (str1); i++)
        str1[i] = tolower (str1[i]);

    for (i = 0; i < strlen (str2); i++)
        str2[i] = tolower (str2[i]);

    /* esito*/
    if ((val = strncmp (str1, str2, N)) > 0)
        printf ("La prima e'maggiore della seconda per i primi %d caratteri", N);
    else if (val < 0)
        printf ("La seconda e'maggiore della prima per i primi %d caratteri", N);
    else    
        printf ("Le due stringhe sono uguali per i primi %d caratteri", N);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 14/07/2021
