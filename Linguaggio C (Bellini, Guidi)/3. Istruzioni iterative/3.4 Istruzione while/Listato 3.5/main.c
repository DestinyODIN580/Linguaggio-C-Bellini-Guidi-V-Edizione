/* 3.5 - Diramazione if all'interno di una iterazione while */

/* Determina somma e maggiore dei valori immessi */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int somma, numero, max, i;

    numero = i = 1;
    somma = max = 0;


    printf ("SOMMA E MAGGIORE\n");
    printf ("zero per finire\n");

    while (numero != 0 && i <= 10)
    {
        printf ("Valore int.: ");
        scanf ("%d", &numero);

        if (numero > max)
            max = numero;
        
        somma = somma + numero;
        i++;
    }

    printf ("Somma: %d\n", somma);
    printf ("Maggiore: %d\n", max);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
