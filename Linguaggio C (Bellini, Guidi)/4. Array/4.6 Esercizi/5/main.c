/* 40.
    Scrivere un programma che, letti gli elementi di due vettori v1 e v2 di lunghezza 5, determini il vettore w di
    lunghezza 10 ottenuto alternando gli elementi di v1 e v2. Visualizzare v1, v2 e w.
    Per esempio: se v1 e v2 sono i vettori di caratteri

        v1 > [ B N S I O ]
        V2 > [ E I S M ! ]

    si deve ottenere il vettore

        W >> [ B E N I S S I M O ! ]
*/

#include <stdio.h>

#define LEN 5

int main (int argc, char const *argv[])
{
    char vet1[LEN];         /* vettore 1 */
    char vet2[LEN];         /* vettore 2 */
    char vet3[LEN * 2];     /* vettore alternato 1/2 */

    int i, j;               /* contatori */

    
    /* costruzione di vet1 */
    printf ("Primo vettore\n");
    for (i = 0; i < LEN; i++)
    {
        printf ("Inserire il carattere %d > ", i + 1);
        scanf ("%c", &vet1[i]);
        getchar();
    }

    /* costruzione di vet2 */
    printf ("Secondo vettore\n");
    for (i = 0; i < LEN; i++)
    {
        printf ("Inserire il carattere %d > ", i + 1);
        scanf ("%c", &vet2[i]);
        getchar();
    }

    /* esito */
    for (i = j = 0; i < LEN * 2; i++, j++)
    {
        printf ("%2c ", vet3[i++] = vet1[j]);
        printf ("%2c ", vet3[i] = vet2[j]);
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
