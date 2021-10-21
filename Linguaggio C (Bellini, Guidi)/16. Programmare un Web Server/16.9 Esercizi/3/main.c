/* 176.
    Scrivere tramite CGI un sistema che consenta:
    - la registrazione
    - la cancellazione
    - la correzione
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char mat[LEN][LEN]; /* matrice di dati */

    int lastIndex;      /* indice simbolico matrice */
    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    c = 1;
    lastIndex = i = j = 0;


    while (c)
    {   
        /* menu */
        printf ("0. Uscire\n");
        printf ("1. Registrazione\n");
        printf ("2. Cancellazione\n");
        printf ("3. Correzione\n");
        printf ("> ");
        scanf ("%d", &c);
        getchar ();

        /* esito */
        switch (c)
        {
            /* uscita */
            case 0:
                c = 0;
                break;

            /* inserimento */
            case 1:
                printf ("Nuovo utente > ");

                i = 0;
                while ((c = getchar ()) != '\n')
                    mat[lastIndex][i++] = c;
                mat[lastIndex++][i] = '\0';

                printf ("Utente registrato\n\n");
                c = 1;
                break;

            /* cancellazione*/
            case 2:
                printf ("Utente da eliminare > \n\n");

                for (i = 0; i < lastIndex; i++)
                {
                    printf ("%d > ", i);
                    for (j = 0; mat[i][j] != '\0'; j++)
                        printf ("%c", mat[i][j]);
                    printf ("\n");
                }

                printf ("Riga da eliminare > ");
                scanf ("%d", &i);
                getchar ();

                for (; i < lastIndex; i++)
                    for (j = 0; mat[i][j] != '\0'; j++)
                        mat[i][j] = mat[i + 1][j];
                lastIndex--;

                for (i = 0; i < lastIndex; i++)
                {
                    printf ("%d > ", i);
                    for (j = 0; mat[i][j] != '\0'; j++)
                        printf ("%c", mat[i][j]);
                    printf ("\n");
                }

                c = 1;
                break;

            /* correzione */
            case 3:
                printf ("Utente da correggere > \n\n");

                for (i = 0; i < lastIndex; i++)
                {
                    printf ("%d > ", i);
                    for (j = 0; mat[i][j] != '\0'; j++)
                        printf ("%c", mat[i][j]);
                    printf ("\n");
                }

                printf ("Riga da correggere > ");
                scanf ("%d", &i);
                getchar ();

                j = 0;
                while ((c = getchar()) != '\n')
                    mat[i][j++] = c;
                mat[i][j] = '\0';

                printf ("\n\nCorrezione effettuata > \n");

                for (i = 0; i < lastIndex; i++)
                {
                    printf ("%d > ", i);
                    for (j = 0; mat[i][j] != '\0'; j++)
                        printf ("%c", mat[i][j]);
                    printf ("\n");
                }
                break;

                default:
                    break;
        }
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 22/10/2021
