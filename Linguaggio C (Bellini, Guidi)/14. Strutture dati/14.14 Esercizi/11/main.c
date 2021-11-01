/* 154.
    Scrivere la dichiarazione di una lista bidirezionale, ovvero di una lista in cui ogni elemento,
    oltre al campo informazione e a quello puntatore all’elemento successivo, ha anche un campo
    puntatore all’elemento precedente. Definire quindi una struttura composta da elementi di questo
    tipo cui si può accedere grazie a due puntatori: uno al primo elemento e uno all’ultimo.
*/

#include <stdio.h>
#include <stdlib.h>

/* lista di interi reversibile */
struct list
{
    int num;

    struct list *forw, *back;
};

int main (int argc, char const *argv[])
{
    int input;  /* numero in input */
    int out;    /* flag */
    int i;      /* contatore */

    struct list *origin, *pBack, *p, *end;  /* setup di lista */

    out = 0;
    i = 1;


    p = origin = (struct list *) malloc (sizeof (struct list));

    /* assegnamento di input */
    printf ("Inserire l'elemento [%2d] > ", i++);
    scanf ("%d", &input);

    /* list vuota */
    if (!input)
    {
        p->forw = NULL;
        p->back = NULL;
    }
    /* list non vuota */
    else
    {
        /* popolamento della struttura */
        p->num = input;
        pBack = p;
        p->back = NULL;
        p->forw = (struct list *) malloc (sizeof (struct list));
        p = p->forw;

        while (!out)
        {    
            printf ("Inserire l'elemento [%2d] > ", i++);
            scanf ("%d", &input);      

            if (!input)
            {
                p->back = pBack;
                p->forw = NULL;
                out = 1;
            }
            else
            {
                p->num = input;
                p->back = pBack;
                pBack = p;
                p->forw = (struct list *) malloc (sizeof (struct list));
                p = p->forw;
            }
        }
    }
    end = pBack;

    /* esito */
    for (p = end; p->back != NULL; p = p->back)
        printf ("%d ", p->num);
    printf ("%d", p->num);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/10/2021
