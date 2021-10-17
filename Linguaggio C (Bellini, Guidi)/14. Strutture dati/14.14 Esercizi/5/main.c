/* 148.
    Definire una funzione che calcoli il numero totale degli elementi che compongono una lista.
    Scrivere un’altra funzione che stampi l’n-esimo elemento di una lista se questo esiste, altrimenti
    visualizzi il messaggio: “La lista non contiene un numero sufficiente di elementi”.
*/

#include <stdio.h>
#include <stdlib.h>

/* struct di interi */
struct list
{
    int num;

    struct list *bridge;
};

int listDimension (struct list *);      /* funzione che ritorna la dimensione della lista */

void listIndex (struct list *, int);    /* funzione che determina num dell' n-esimo elemento della lista */

int main (int argc, char const *argv[])
{
    int input; /* numero in input */
    int out;   /* flag */
    int i;     /* contatori */

    struct list *origin, *p; /* setup di lista */

    i = out = 0;

    origin = p = (struct list *) malloc (sizeof(struct list));


    /* assegnamento di input */
    printf ("Elemento numero [%2d] > ", i++);
    scanf ("%d", &input);

    /* list vuota */
    if (!input)
        p->bridge = NULL;
    /* list non vuota */
    else
    {
        p->num = input;
        p->bridge = (struct list *) malloc (sizeof(struct list));
        p = p->bridge;

        /* popolamento della lista */
        while (!out)
        {
            printf ("Elemento numero [%2d] > ", i++);
            scanf ("%d", &input);

            if (!input)
            {
                out = 1;
                p->bridge = NULL;
            }

            else
            {
                p->num = input;
                p->bridge = (struct list *) malloc (sizeof(struct list));
                p = p->bridge;
            }
        }
    }

    /* esito */
    printf ("Dimensione della lista > %d;\n", listDimension (p = origin));

    printf ("Inserire il numero > ");
    scanf ("%d", &input);

    /* esito */
    listIndex (p = origin, input);

    /* stampa di list */
    p = origin;
    while (p->bridge != NULL)
    {
        printf ("%d -- ", p->num);
        p = p->bridge;
    }
    printf ("0;\n");

    printf ("\n");
    return 0;
//
}

int listDimension (struct list *p)
{
    if (p->bridge != NULL)
        return 1 + listDimension (p = p->bridge);
    else
        return 0; 
}

void listIndex (struct list *p, int n)
{
    int i;

    i = listDimension (p);


    if (n > i)
        printf("La lista non contiene un numero sufficiente di elementi");
    else
    {
        for (i = 0; i < n; i++, p = p->bridge);
        printf ("Elemento > %d;\n", p->num);
    }
             
}
// Marco Fiorillo 17/10/2021
