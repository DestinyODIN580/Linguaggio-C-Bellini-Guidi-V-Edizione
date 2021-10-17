/* 150.
    Realizzare una funzione che ordini una lista in modo crescente. Scrivere un’altra funzione che
    inserisca in una lista ordinata al posto opportuno un nuovo elemento richiesto all’utente.
*/

#include <stdio.h>
#include <stdlib.h>

/* list di interi */
struct list
{
    int num;

    struct list *bridge;
};

void sortedList (struct list *); /* epura list dai non divisori di n */

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

    /* funzione che ordina */
    sortedList (p = origin);

    /* esito */
    p = origin;
    printf ("Lista epurata > ");
    while (p->bridge != NULL)
    {
        printf ("%d -- ", p->num);
        p = p->bridge;
    }
    printf ("0;");

    printf ("\n");
    return 0;
}

void sortedList (struct list *origin)
{
    int aux;                    /* var. di supporto */
    int len;                    /* lunghezza della lista */
    int i, j;                   /* contatori */

    struct list *p, *seeker;    /* setup della lista */

    len = 0;

    p = origin;


    /* determinazione di len */
    while (p->bridge != NULL)
    {
        p = p->bridge;
        len++;
    }

    /* sorting della lista */
    for (p = origin, i = 0; i < len - 1; i++, p = origin)
        for (seeker = p->bridge, j = 0; j < len - 1; j++, seeker = p->bridge, p = p->bridge)
            if (p->num > seeker->num)
            {
                aux = seeker->num;
                seeker->num = p->num;
                p->num = aux;
            }


    return ;
}
// Marco Fiorillo 17/10/2021
