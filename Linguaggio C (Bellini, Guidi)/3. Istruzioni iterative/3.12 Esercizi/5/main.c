/* 28.
    Realizzare un programma che richieda all’utente n interi, e visualizzi il numero di volte in cui sono stati
    eventualmente immessi i valori 10, 100 e 1000.
*/

#include <stdio.h>


int main (int argc, char const *argv[])
{
    int tenCounter;
    int hunCounter;
    int thoCounter;
    int n;
    int i;

    tenCounter = hunCounter = thoCounter = i = 0;


    /* determinazione di tenCounter, hunCounter e thoCouter */
    printf ("Inserire 0 per terminare");
    do
    {
        printf ("\nNumero [%d] > ", ++i);
        scanf ("%d", &n);

        switch (n)
        {
            case (10):
                tenCounter++;
                break;
            
            case (100):
                hunCounter++;
                break;

            case (1000):
                thoCounter++;
                break;

            default:
                break;
        }       
    } while (n);
    printf ("\n");

    /* esito */
    printf ("\n10   inseriti >> %d", tenCounter);
    printf ("\n100  inseriti >> %d", hunCounter);
    printf ("\n1000 inseriti >> %d", thoCounter);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
