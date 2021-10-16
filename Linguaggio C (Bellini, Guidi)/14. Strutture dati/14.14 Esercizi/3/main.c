/* 146.
    Scrivere un programma che accetti in ingresso una sequenza di valori interi terminante con zero e la memorizzi in
    una lista lineare. Successivamente eliminare dalla lista creata quelli che non sono divisori di n, dove n è un numero
    intero passato in ingresso dall’utente.
*/

#include <stdio.h>
#include <stdlib.h>

/* list di interi */
struct list
{
    int num;

    struct list *bridge;
};

struct list *divis (struct list *, int);    /* epura list dai non divisori di n */

int main (int argc, char const *argv[])
{
    int input;      /* numero in input */
    int out;        /* flag */
    int i;          /* contatore */

    struct list *origin, *p;    /* setup di list */

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
        p->bridge = (struct list *) malloc (sizeof (struct list));
        p = p->bridge;

        while (!out)
        {
            printf ("Inserire il numero [%d] > ", i++);
            scanf ("%d", &input);

            if (input)
            {
                p->num = input;
                p->bridge = (struct list *) malloc (sizeof (struct list));
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

    /* inserimento di n */
    printf ("Inserire il numero di cui trovare i divisori > ");
    scanf ("%d", &input);

    /* funzione che filtra */
    origin = divis (origin, input);

    /* esito */
    p = origin;
    printf("Lista epurata > ");
    while (p->bridge != NULL)
    {
        printf("%d -- ", p->num);
        p = p->bridge;
    }
    printf("0;");


    printf ("\n");
    return 0;
}

struct list *divis (struct list *origin, int n)
{
    struct list *p, *seeker;


    /* spostamento di origin */
    while (n % origin->num)
        origin = origin->bridge;

    p = seeker = origin;

    /* filtro dei non divisori */
    while (p->bridge != NULL)
    {
        if (!(n % p->num))
        {
            seeker = p;
            p = p->bridge;
        }
        else
        {
            p = p->bridge;
            seeker->bridge = p;
        }
    }


    return origin;
}
// Marco Fiorillo 16/10/2021
