/* 4.2 - Esempio di utilizzo di un array */

/* Carica i punteggi di n concorrenti su due prove
   Determina la classifica                        */

#include <stdio.h>

#define MAX_CONC 1000   /* massimo numero di concorrenti */
#define MIN_PUN 1       /* punteggio minimo per ogni prova */
#define MAX_PUN 10      /* punteggio massimo per ogni prova */

int main (int argc, char const *argv[])
{
    int i, n;

    float prova1[MAX_CONC];
    float prova2[MAX_CONC];
    float totale[MAX_CONC];


    do
    {   
        printf ("\nNumero concorrenti: ");
        scanf ("%d", &n); 
    } while (n < 1 || n > MAX_CONC);

    /* Per ogni concorrente, richiesta punteggio nelle due prove */
    for (i = 0; i < n ; i++)
    {
        printf ("\nConcorrente n.%d \n", i + 1);

        do
        {
            printf ("Prima prova: ");
            scanf ("%f", &prova1[i]);
        } while (prova1[i] < MIN_PUN || prova1[i] > MAX_PUN);

        do
        {
            printf ("Seconda prova: ");
            scanf ("%f", &prova2[i]);
        } while (prova2[i] < MIN_PUN || prova2[i] > MAX_PUN);
    }
    
    /* Calcolo media per concorrente */
    for (i = 0; i < n; i++)
        totale[i] = (prova1[i] + prova2[i]) / 2;

    printf("\n      CLASSIFICA\n");
    for(i = 0; i < n; i++)
        printf ("%f   %f   %f \n", prova1[i], prova2[i], totale[i]);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
