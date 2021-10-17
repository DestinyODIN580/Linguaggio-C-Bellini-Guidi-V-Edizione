/* 152.
    Scrivere una funzione che inverta l’ordine di una lista.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 100

/* list di interi */
struct list
{
    int num;

    struct list *bridge;
};

void revList (struct list *); /* inverte una lista */

int main (int argc, char const *argv[])
{
    int input; /* numero in input */
    int out;   /* flag */
    int i;     /* contatore */

    struct list *origin, *p; /* setup di list */

    i = out = 0;

    origin = p = (struct list *) malloc (sizeof(struct list));

    /* assegnazione di input */
    printf ("Inserire il numero [%d] > ", i++);
    scanf ("%d", &input);

    /* lista vuota */
    if (!input)
        origin->bridge = NULL;
    /* lista non vuota */
    else
    {
        /* popolamento di list */
        p->num = input;
        p->bridge = (struct list *) malloc (sizeof(struct list));
        p = p->bridge;

        while (!out)
        {
            printf ("Inserire il numero [%d] > ", i++);
            scanf ("%d", &input);

            if (input)
            {
                p->num = input;
                p->bridge = (struct list *) malloc (sizeof(struct list));
                p = p->bridge;
            }
            else
            {
                out = 1;
                p->bridge = NULL;
            }
        }
    }

    /* stampa di list */
    p = origin;
    printf ("Lista inserita > ");
    while (p->bridge != NULL)
    {
        printf ("%d -- ", p->num);
        p = p->bridge;
    }
    printf ("0;");

    /* funzione che inverte una lista */
    revList (p = origin);
    
    /* esito */
    p = origin;
    printf ("Lista invertita > ");
    while (p->bridge != NULL)
    {
        printf("%d -- ", p->num);
        p = p->bridge;
    }


    printf("\n");
    return 0;
}

void revList (struct list *origin)
{
    int list[LEN];

    int aux;  /* var. di supporto */
    int len;  /* lunghezza della lista */
    int i, j; /* contatori */

    struct list *p, *seeker; /* setup della lista */

    len = 0;

    p = origin;

    /* salvataggio della lista in un array */
    while (p->bridge != NULL)
    {
        list[len++] = p->num;
        p = p->bridge;
    }

    for (p = origin, len--; len >= 0; len--, p = p->bridge)
        p->num = list[len];


    return;
}
// Marco Fiorillo 17/10/2021
