/* 149.
    Scrivere una funzione che cancelli da una lista tutte le occorrenze di un particolare elemento se
    questo è presente nella lista, altrimenti visualizzi il messaggio: “Elemento non presente nella lista”.
*/

#include <stdio.h>
#include <stdlib.h>

/* list di interi */
struct list
{
    int num;

    struct list *bridge;
};

struct list *deleteElems (struct list *, int); /* epura list dagli elementi n */

int main (int argc, char const *argv[])
{
    int input; /* numero in input */
    int out;   /* flag */
    int i;     /* contatore */

    struct list *origin, *p; /* setup di list */

    i = out = 0;

    origin = p = (struct list *) malloc (sizeof (struct list));

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
            printf("Inserire il numero [%d] > ", i++);
            scanf("%d", &input);

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
        printf("%d -- ", p->num);
        p = p->bridge;
    }
    printf ("0;");

    /* inserimento di n */
    printf ("Inserire il numero di cui eliminare le occorrenze > ");
    scanf ("%d", &input);

    /* funzione che filtra */
    origin = deleteElems (origin, input);

    /* esito */
    p = origin;
    printf ("Lista epurata > ");
    while (p->bridge != NULL)
    {
        printf("%d -- ", p->num);
        p = p->bridge;
    }
    printf("0;");

    printf("\n");
    return 0;
}

struct list *deleteElems (struct list *origin, int n)
{
    int flag;

    struct list *p, *seeker;

    flag = 0;


    /* spostamento di origin */
    while (n == origin->num)
    {
        origin = origin->bridge;
        flag = 1;
    }
    
    p = seeker = origin;

    /* filtro delle occorrenze */
    while (p->bridge != NULL)
    {
        if (n != p->num)
        {
            flag = 1;
            seeker = p;
            p = p->bridge;
        }
        else
        {
            p = p->bridge;
            seeker->bridge = p;
        }
    }

    if (flag)
        printf ("Elemento non presente nella lista\n");


    return origin;
}
// Marco Fiorillo 17/10/2021
