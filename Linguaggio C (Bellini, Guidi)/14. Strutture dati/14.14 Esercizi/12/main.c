/* 155.
    Scrivere un programma completo per la gestione tramite vettore di una coda. In particolare, il
    programma dovrà gestire le operazioni di inserimento, cancellazione e visualizzazione della coda.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main (int argc, char const *argv[])
{
    int queue[LEN]; /* coda */
    int choise;     /* scelta */
    int origin;     /* indici smibolici */
    int i;          /* contatore */

    choise = i = 0;
    origin = LEN;


    while (!choise)
    {
        /* menu */
        printf ("\n0. Uscire");
        printf ("\n1. Inserimento");
        printf ("\n2. Cancellazione");
        printf ("\n3. Visualizzaione");
        printf ("\n>> ");
        scanf ("%d", &choise);


        /* esito */
        switch (choise)
        {
            case 1:
                if (origin - 1 >= 0)
                {
                    printf ("Inserimento del valore > ");
                    scanf ("%d", &queue[--origin]);
                }
                else
                    printf ("Coda piena\n");
                break;

            case 2:
                if (origin == LEN)
                    printf ("Nessun elemento presente");
                else
                    origin++;
                break;

            case 3:
                if (origin == LEN)
                    printf ("Coda vuota");
                else
                {
                    printf("Inizio --> ");
                    for (i = origin; i < LEN; i++)
                        printf ("%d ", queue [i]);
                    printf ("<-- Fine");
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
