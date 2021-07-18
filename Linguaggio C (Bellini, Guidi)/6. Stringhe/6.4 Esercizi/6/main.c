/* 70.
    Scrivere un programma che, richieste all’utente le stringhe frase, parola1 e parola2, controlli se in frase è
    contenuta parola1, e in tal caso sostituisca tutte le sue occorrenze con parola2.
*/

#include <stdio.h>
#include <string.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char frase[LEN];        /* frase */
    char fraseOut[LEN];     /* frase con le occorrenze sostituite */
    char parola1[LEN];      /* parola1,  da ricercare */
    char parola2[LEN];      /* parola2,  da ricercare */

    int out;                /* flag */
    int c;                  /* carattere in entrata */
    int i, j, k, f;         /* contatori */


    /* costruzione frase */
    printf ("Inserire frase > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        frase[i++] = c;
    frase[i] = '\0';

    /* costruzione parola1 */
    printf ("Inserire parola1 > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        parola1[i++] = c;
    parola1[i] = '\0';

    /* costruzione parola2 */
    printf ("Inserire parola2 > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        parola2[i++] = c;
    parola2[i] = '\0';

    /* identificazione delle occorrenze di parola1 in frase e costruzione di fraseOut */
    printf ("\n");
    for (out = i = j = f = 0; i < strlen (frase); i++, f++)
    {
        if (frase[i] == parola1[0])
        {
            for (out = j = 0, k = i; j < strlen (parola1); j++, k++)
                if (parola1[j] != frase[k])
                    out = 1;

            if (out)
                fraseOut[f] = frase[i];
            else
            {
                for (j = 0; j < strlen (parola2); j++, f++)
                    fraseOut[f] = parola2[j];
                i += strlen (parola1) - 1;
                f--;
            }
        }
        else
            fraseOut[f] = frase[i];
    }


    /* stampa degli input */
    printf ("Frase    >> %s\n", frase);
    printf ("Parola 1 >> %s\n", parola1);
    printf ("Parola 2 >> %s\n", parola2);

    /* esito */
    fraseOut[++f] = '\0';
    printf ("\nFrase  >> %s", fraseOut);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/07/2021


