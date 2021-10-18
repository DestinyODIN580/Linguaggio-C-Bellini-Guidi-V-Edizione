/* 156.
    Realizzare la gestione di una coda che comprenda le operazioni di inserimento, cancellazione e visualizzazione,
    implementando la struttura dati mediante una array circolare.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main (int argc, char const *argv[])
{
    int queue[LEN];     /* coda */
    int choise;         /* scelta */
    int origin;         /* indici smibolici */
    int input;          /* numero in input */
    int i, j;           /* contatore */

    choise = i = 0;
    origin = LEN;

    while (!choise)
    {
        /* menu */
        printf("\n0. Uscire");
        printf("\n1. Inserimento");
        printf("\n2. Cancellazione");
        printf("\n3. Visualizzaione");
        printf("\n>> ");
        scanf("%d", &choise);

        /* esito */
        switch (choise)
        {
            case 0:
                exit (0);
            
            case 1:
                if (origin - 1 >= 0)
                {
                    printf("Inserimento del valore > ");
                    scanf("%d", &queue[--origin]);
                    if (i <= 5)
                        i++;
                }            
                else
                {
                    printf("Inserimento del valore > ");
                    scanf("%d", &input);
                    for (j = LEN - 1; j > 0; j--)
                        queue[j] = queue[j - 1];
                    queue[j] = input;
                    origin = 0;
                    if (i <= 5)
                        i++;
                }
                break;

            case 2:
                if (!i)
                    printf("Nessun elemento presente");
                else
                {
                    i--;
                    origin++;
                }

                break;

            case 3:
                if (origin == LEN)
                    printf("Coda vuota");
                else
                {
                    if (i == LEN)
                    {
                        printf("Inizio --> ");
                        for (j = 0; j < LEN; j++)
                            printf("%d ", queue[j]);
                        printf("<-- Fine");
                    }
                    else
                    { 
                        printf("Inizio --> ");
                        for (j = origin; j < LEN; j++)
                            printf("%d ", queue[j]);
                        printf("<-- Fine");
                    }
                }
                break;

            default:
                choise = 1;
                break;
        }
        choise = 0;
    }

    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/10/2021
