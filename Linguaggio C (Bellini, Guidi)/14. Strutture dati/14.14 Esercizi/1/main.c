/* 144.
    Scrivere un programma che accetti in ingresso una sequenza di valori interi terminante con zero e la memorizzi in
    una lista lineare. Successivamente il programma deve determinare il numero di pari e di dispari presenti nella lista.
    Risolvere il problema anche con funzioni ricorsive.
*/

#include <stdio.h>
#include <stdlib.h>

/* lista lineare di interi */
struct list
{       
    int num;

    struct list *bridge;
};


int evenRecursive (struct list *);  /* ritorna il totale di numeri pari in list */
int oddRecursive (struct list *);   /* ritorna il totale di numeri dispari in list */


int main (int argc, char const *argv[])
{
    int input;      /* numero in input */
    int out;        /* flag */
    int i;          /* contatori */

    struct list *origin, *p;    /* setup di lista */

    out = 0;
    i = 1;

    origin = p = (struct list *) malloc (sizeof (struct list));


    /* inizializzazione di list */    
    printf ("Elemento numero [%2d] > ", i++);
    scanf ("%d", &input);

    /* list vuota */
    if (!input)
        p->bridge = NULL;
    /* list non vuota */
    else
    {
        p->num = input;
        p->bridge = (struct list *) malloc (sizeof (struct list));
        p = p->bridge;
        
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
                p->bridge = (struct list *) malloc (sizeof (struct list));
                p = p->bridge;
            }

        }

    }

    /* stampa di list */
    p = origin;
    while (p->bridge != NULL)
    {
        printf ("%d -- ", p->num);
        p = p->bridge;
    }
    printf ("0;\n");

    /* esito */
    printf ("Numeri pari     >> %d\n", evenRecursive (p = origin));  
    printf ("Numeri dispari  >> %d\n", oddRecursive (p = origin));  
    

    printf ("\n");
    return 0;
}

int evenRecursive (struct list *p)
{
    if (p->bridge == NULL)
        return 0;
    else if (!((p->num) % 2))
        return 1 + evenRecursive (p = p->bridge);
    else
        return 0 + evenRecursive (p = p->bridge);
}

int oddRecursive (struct list *p)
{
    if (p->bridge == NULL)
        return 0;
    else if ((p->num) % 2)
        return 1 + oddRecursive (p = p->bridge);
    else
        return 0 + oddRecursive (p = p->bridge);
}
// Marco Fiorillo 15/10/2021
