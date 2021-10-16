/* 145.
    Scrivere un programma che accetti in ingresso una sequenza di valori interi terminante con zero e la memorizzi in
    una lista lineare. Successivamente il programma deve eliminare dalla lista i numeri pari.
*/

#include <stdio.h>
#include <stdlib.h>

/* lista lineare di interi */
struct list
{
    int num;

    struct list *bridge;
};

struct list *evenElimination (struct list *);   /* epura una lista di interi dei numeri pari */ 

int main (int argc, char const *argv[])
{
    int input;                  /* numero in input */
    int out;                    /* flag */
    int i;                      /* contatore */

    struct list *origin, *p;    /* setup di list */

    out = i = 0;
    
    origin = p = (struct list *) malloc (sizeof (struct list));


    /* seeganzione input */
    printf ("Inserire l'elemento [%d] > ", i++);
    scanf ("%d", &input);

    /* lista vuota */
    if (!input)
        p->bridge = NULL;
    /* lista non vuota */
    else
    {   
        /* creazione testa */
        p->num = input;
        p->bridge = (struct list *) malloc (sizeof (struct list));
        p = p->bridge;

        /* popolazione di list */
        while (!out)
        {
            printf ("Inserire l'elemento [%d] > ", i++);
            scanf ("%d", &input);

            if (!input)
            {
                p->bridge = NULL;
                out = 1;
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
    printf ("\nLista inserita >> ");
    p = origin;
    while (p->bridge != NULL)
    {
        printf ("%d -- ", p->num);
        p = p->bridge;
    }
    printf ("0;\n");

    /* epurazione dei numeri pari */
    origin = evenElimination (origin);

    /* esito */
    printf ("Lista filtrata >> ");
    p = origin;
    while (p->bridge != NULL)
    {
        printf ("%d -- ", p->num);
        p = p->bridge;
    }
    printf ("0;\n");


    printf ("\n");
    return 0;
}

struct list *evenElimination (struct list *origin)
{
    int flag;   /* flag */
    int i;      /* contatore */

    struct list *seeker, *check, *p;    /* setup di lista */

    i = 0;


    /* scioglimento di tutti i membri da origin pari */
    if (!(origin->num % 2) && origin->bridge != NULL)
    {
        i++;

        seeker = origin->bridge; 

        while (!(seeker->num % 2) && seeker->bridge != NULL)
        {
            i++;
            seeker = seeker->bridge;
        }

        if (seeker->bridge == NULL)
            origin->bridge = NULL;
        else
            origin = seeker;
    }

    /* separazione dal resto degli elementi pari */
    if (origin->bridge != NULL)
    {
        seeker = p = origin;
        while (p->bridge != NULL)
        {
            if (p->num % 2)
                check = p;

            if (!(p->num % 2))
            {
                seeker = p;
                while (!(seeker->num % 2) && seeker->bridge != NULL)
                    seeker = seeker->bridge;
                
                check->bridge = seeker;
                p = check;
            }
            p = p->bridge;
        }
    }


    return origin;
}
// Marco Fiorillo 16/10/2021
