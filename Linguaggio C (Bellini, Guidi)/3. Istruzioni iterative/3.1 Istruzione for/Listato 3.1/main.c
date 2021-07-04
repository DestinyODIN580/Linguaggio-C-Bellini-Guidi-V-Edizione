/* 3.1 - Iterazione con l'istruzione for */

/* Esempio di utilizzo dell'istruzione for
   Calcola la somma di cinque numeri interi
   immessi dall'utente                      */

#include <stdio.h>

int i, somma, numero;

int main (int argc, char const *argv[])
{
    printf ("SOMMA 5 NUMERI\n");
    somma = 0;

    for (i = 1; i <= 5; i = i + 1)
    {   
        printf ("Inser. intero: ");
        scanf ("%d", &numero);
        somma = somma + numero;
    }
    printf ("Somma: %d\n", somma);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
