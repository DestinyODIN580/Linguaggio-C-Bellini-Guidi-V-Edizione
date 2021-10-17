/* 147.
    Data in ingresso una sequenza di valori interi terminante con zero, costruire due liste lineari, una contenente i valori
    positivi e una i valori negativi. Visualizzare le liste costruite.
*/

#include <stdio.h>
#include <stdlib.h>

/* struct di numeri positivi */
struct positive
{
    int num;

    struct positive *bridge;
};

/* struct di numeri negativi */
struct negative
{
    int num;

    struct negative *bridge;
};

int main (void)
{   
    int input;      /* valore in input */
    int out;        /* flag */
    int i;          /* contatore */

    struct positive *originPositive, *pPositive;
    struct negative *originNegative, *pNegative;

    out = i = 0;

    originPositive = pPositive = (struct positive *) malloc (sizeof (struct positive));
    originNegative = pNegative = (struct negative *) malloc (sizeof (struct negative));


    /* assegnazione di input */ 
    printf ("Inserire il numero [%2d] > ", i++);
    scanf ("%d", &input);

    /* lista vuota */
    if (!input)
    {
        originPositive->bridge = NULL;
        originNegative->bridge = NULL;
    }
    /* lista non vuota */
    else
    {
        /* storing numero > 0 */
        if (input > 0)
        {
            pPositive->num = input;
            pPositive->bridge = (struct positive *) malloc (sizeof (struct positive));
            pPositive = pPositive->bridge;
        }
        /* storing numero < 0 */
        else
        {
            pNegative->num = input;
            pNegative->bridge = (struct negative *) malloc (sizeof (struct negative));
            pNegative = pNegative->bridge; 
        }
        /* loop per la raccolta delle informazioni */
        while (!out)
        {
            printf("Inserire il numero [%2d] > ", i++);
            scanf("%d", &input);

            if (!input)
            {
                pPositive->bridge = NULL;
                pNegative->bridge = NULL;
                out = 1;
            }
            else if (input > 0)
            {
                pPositive->num = input;
                pPositive->bridge = (struct positive *) malloc (sizeof (struct positive));
                pPositive = pPositive->bridge;
            }
            else
            {
                pNegative->num = input;
                pNegative->bridge = (struct negative *) malloc (sizeof (struct negative));
                pNegative = pNegative->bridge;
            }
        }
    }

    /* esito */
    printf ("\nNumeri positivi inseriti > ");
    pPositive = originPositive;
    while (pPositive->bridge != NULL)
    {
        printf ("%d -- ", pPositive->num);
        pPositive = pPositive->bridge;
    }
    printf ("0;");

    /* esito */
    printf ("\nNumeri negativi inseriti > ");
    pNegative = originNegative;
    while (pNegative->bridge != NULL)
    {
        printf ("%d -- ", pNegative->num);
        pNegative = pNegative->bridge;
    }
    printf("0;");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 17/10/2021
