/* 157.
    Ripetere l’esercizio precedente, implementando la struttura dati mediante una lista circolare.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

struct coda
{
    int num;

    struct coda *prev, *forw;
};

int main (int argc, char const *argv[])
{
    int input;                          /* numero in input */
    int choise;                         /* scelta */
    int i, j;                           /* contatore */

    struct coda *origin, *p, *seeker;   /* setup di coda */

    i = 0;

    p = origin = (struct coda *) malloc (sizeof (struct coda));
    origin->prev = NULL;  


    while (1)
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
                if (i == LEN)
                {
                    printf ("Inserire il valore > ");
                    scanf ("%d", &input);
                    
                    p = origin;
                    while (p->forw->forw != NULL)
                    {
                        p->num = p->forw->num;
                        p = p->forw;
                    }
                    p->num = input;
                }
                else
                {
                    printf("Inserire il valore > ");
                    scanf("%d", &input);

                    seeker = p;
                    p->num = input;
                    p->forw = (struct coda *)malloc(sizeof(struct coda));
                    p = p->forw;
                    p->prev = seeker;
                    i++;
                    p->forw = NULL;
                }
                break;

            case 2:
                if (p->prev != NULL)
                {
                    i--;
                    seeker = p;
                    p = p->prev;
                    p->forw = NULL;
                    free (seeker);
                }
                else
                    printf ("Lista vuota\n");

                break;

            case 3:
                p = origin;
                printf ("\n>> ");
                while (p->forw != NULL)
                {
                    printf ("%d ", p->num);
                    p = p->forw;
                }
                printf (";\n\n");
                break;

            default:
                break;
        }
    }


    printf("\n");
    return 0;
}
// Marco Fiorillo 18/10/2021
