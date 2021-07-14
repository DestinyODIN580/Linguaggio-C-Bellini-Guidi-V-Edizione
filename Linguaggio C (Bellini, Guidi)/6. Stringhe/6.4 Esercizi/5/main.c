/* 69.
    Data la seguente assegnazione alla stringa esercizio
        
        esercizio:='1234567890abcdefghilmopqrstvuzABCDEFGHILMNOPQRSTVUZ';

    spostare i caratteri numerici dopo le lettere minuscole e prima delle lettere maiuscole, in modo che la stringa assuma il
    valore

        abcdefghilmopqrstvuz1234567890ABCDEFGHILMNOPQRSTVUZ

    Effettuare le operazioni necessarie senza utilizzare costanti che identifichino la posizione dei caratteri, ma reperire
    dinamicamente tali posizioni, in modo che il programma abbia una valenza più generale.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char esercizio[] = "1234567890abcdefghilmopqrstvuzABCDEFGHILMNOPQRSTVUZ"; // abcdefghilmopqrstvuz1234567890ABCDEFGHILMNOPQRSTVUZ
    char numbs[LEN];                                                          /* numeri in esercizio */
    char upper[LEN];                                                          /* maiuscoli in esercizio */
    char lower[LEN];                                                          /* minuscoli in esercizio */
    char other[LEN];                                                          /* altro in esercizio */

    int i, j, k, p, s, x;                                                     /* contatori */


    /* costruzioni di numbs, lower, upper, other */
    for (i = j = k = p = s = 0; i < strlen (esercizio); i++)
    {
        if (esercizio[i] >= '0' && esercizio[i] <= '9')
            numbs[j++] = esercizio[i];
        else if (esercizio[i] >= 'A' && esercizio[i] <= 'Z')
            upper[k++] = esercizio[i];
        else if (esercizio[i] >= 'a' && esercizio[i] <= 'z')
            lower[p++] = esercizio[i];
        else
            other[s++] = esercizio[i];
    }

    /* stampa di esercizio */
    printf ("Stringa originale  >> %s;\n", esercizio);

    /* overwrite di esercizio */
    for (i = x = 0; x < p; x++, i++)
        esercizio[i] = lower[x];

    for (x = 0; x < j; x++,  i++)
        esercizio[i] = numbs[x];

    for (x = 0; x < k; x++,  i++)
        esercizio[i] = upper[x];

    for (x = 0; x < s; x++, i++)
        esercizio[i] = other[x];

    /* esito */
    printf ("Stringa modificata >> %s;\n", esercizio);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 14/07/2021
