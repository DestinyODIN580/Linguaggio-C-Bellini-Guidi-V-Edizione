/* 153.
    Scrivere una funzione che, a partire da due liste, ne costruisca una terza ottenuta alternando gli
    elementi delle altre due.
*/

#include <stdio.h>
#include <stdlib.h>

/* struct fusione di list1 e list2 */
struct list3
{
    int num;

    struct list3 *bridge;
};

/* struct di interi da fondere con list1 */
struct list2
{
    int num;

    struct list2 *bridge;
};

/* struct di interi da fondere con list2 */
struct list1
{
    int num;

    struct list1 *bridge;
};

int main (int argc, char const *argv[])
{
    int input;  /* numero in inpu */
    int out;    /* flag */
    int i, j;   /* contatori */

    struct list3 *origin3, *p3; /* setup di list3 */
    struct list2 *origin2, *p2; /* setup di list2 */
    struct list1 *origin1, *p1; /* setup di list1 */

    out = 0;
    i = j = 1;

    origin3 = p3 = (struct list3 *) malloc (sizeof (struct list3));
    origin2 = p2 = (struct list2 *) malloc (sizeof (struct list2));
    origin1 = p1 = (struct list1 *) malloc (sizeof (struct list1));


    /* assegnazione di input */
    printf ("Inserire elemento [%2d] lista %d > ", i++, j);
    scanf ("%d", &input);

    /* list1 vuota */
    if (!input)
        p1->bridge = NULL;
    /* list1 non vuota */
    else
    {
        p1->num = input;
        p1->bridge = (struct list1 *) malloc (sizeof (struct list1));
        p1 = p1->bridge;

        /* popolamento della struttura */
        while (!out)
        {
            printf ("Inserire elemento [%2d] lista %d > ", i++, j);
            scanf ("%d", &input);

            if (!input)
            {
                out = 1;
                p1->bridge = NULL;
            }
            else
            {
                p1->num = input;
                p1->bridge = (struct list1 *) malloc (sizeof (struct list1));
                p1 = p1->bridge;
            }

        }
    }



    /* assegnazione di input */
    printf ("Inserire elemento [%2d] lista %d > ", i++, ++j);
    scanf ("%d", &input);
    out = 0;
    i = 1;

    /* list2 vuota */
    if (!input)
        p2->bridge = NULL;
    /* list2 non vuota */
    else
    {
        p2->num = input;
        p2->bridge = (struct list2 *) malloc (sizeof (struct list2));
        p2 = p2->bridge;

        /* popolamento della struttura */
        while (!out)
        {
            printf ("Inserire elemento [%2d] lista %d > ", i++, j);
            scanf ("%d", &input);

            if (!input)
            {
                out = 1;
                p2->bridge = NULL;
            }
            else
            {
                p2->num = input;
                p2->bridge = (struct list2 *) malloc (sizeof (struct list2));
                p2 = p2->bridge;
            }
        }
    }

    /* creazione di list3 */
    for (out = 0, p1 = origin1, p2 = origin2; !out;)
    {
        if (p1->bridge == NULL)
            out = 1;
        else if (p2->bridge == NULL)
            out = 2;
        else
        {
            p3->num = p1->num;
            p1 = p1->bridge;
            p3->bridge = (struct list3 *) malloc (sizeof (struct list3));
            p3 = p3->bridge;
            p3->num = p2->num;
            p2 = p2->bridge;
            p3->bridge = (struct list3 *) malloc (sizeof (struct list3));
            p3 = p3->bridge;
        }
    }

    /* filling della lista rimanente in caso una sia piu'grande dell'altra */
    if (p1->bridge == NULL && p2->bridge == NULL)
        p3->bridge = NULL;
    else if (out == 1)
        while (p2->bridge != NULL)
        {
            p3->num = p2->num;
            p2 = p2->bridge;
            p3->bridge = (struct list3 *) malloc (sizeof (struct list3));
            p3 = p3->bridge;
        }
    else
        while (p1->bridge != NULL)
        {
            p3->num = p1->num;
            p1 = p1->bridge;
            p3->bridge = (struct list3 *) malloc (sizeof (struct list3));
            p3 = p3->bridge;
        }
    p3->bridge = NULL;

    /* esito */
    p3 = origin3;
    printf ("Lista fusa > ");
    while (p3->bridge != NULL)
    {
        printf ("%d -- ", p3->num);
        p3 = p3->bridge;
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/10/2021
