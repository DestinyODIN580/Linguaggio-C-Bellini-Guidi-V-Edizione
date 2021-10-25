/* 151.
    Scrivere una funzione che visualizzi in ordine inverso una lista.
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

void printRevList (struct list *); /* stampa list a partire dall'ultimo elemento */

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
        p->bridge = (struct list *) malloc (sizeof (struct list));
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

    /* funzione che ordina */
    printRevList (p = origin);


    printf("\n");
    return 0;
}

void printRevList (struct list *origin)
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

    /* esito */
    printf ("{");
    for (; len >=0; len--)
        printf ("%d ", list[len]);
    printf ("};\n");

    return;
}
// Marco Fiorillo 17/10/2021
