/* 67.
    Scrivere un programma che ottenga lo stesso effetto richiesto nell’Esercizio 1 ma con l’utilizzo della funzione
    strncat della libreria string.h.
*/

#include <stdio.h>
#include <string.h>

#define LEN 100
#define N 5

int main (int argc, char const *argv[])
{   
    char str1[LEN];     /* stringa 1 */
    char str2[LEN];     /* stringa 2 */

    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = 0; 


    /* costruzione str1 */
    printf ("Prima stringa   >> ");
    while ((c = getchar ()) != '\n')
        str1[i++] = c;
    str1[i] = '\0';

    /* costruzione str2 */
    printf ("Seconda stringa >> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        str2[i++] = c;
    str2[i] = '\0';

    /* append primi N caratteri da str2 a str1 tramite atrncat*/
    strncat (str1, str2, N);

    /* esito */
    printf ("Primi 5 caratteri in append >> %s\n", str1);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 13/07/2021
