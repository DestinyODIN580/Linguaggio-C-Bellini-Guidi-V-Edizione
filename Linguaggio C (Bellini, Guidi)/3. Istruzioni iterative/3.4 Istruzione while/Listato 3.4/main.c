/* 3.4 - Esempio di utilizzo dell'istruzione while */

/* Calcola la somma dei valori interi passati dall'utente
   termina quando viene immesso il valore 0 (zero)      */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int somma, numero;

    numero = 1;
    somma = 0;


    printf ("SOMMA NUMERI\n");
    printf ("zero per terminare\n");

    while (numero)
    {
        printf ("Inser. intero: ");
        scanf ("%d", &numero);
        somma = somma + numero;
    }

    printf ("Somma: %d\n", somma);

    
    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
