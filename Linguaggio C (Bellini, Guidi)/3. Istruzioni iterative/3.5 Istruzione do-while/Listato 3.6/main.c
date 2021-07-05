/* 3.6 - Esempio di utilizzo del costrutto do-while */

/* Determina somma e maggiore dei valori immessi
   (esempio uso do-while)                       */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int somma, numero, max, i;

    numero = i = 1;
    somma = max = 0;


    do
    {
        printf ("Valore int.: ");
        scanf ("%d", &numero);

        if (numero > max)
            max = numero;
        
        somma = somma + numero;
        i++;
    } while (numero != 0 && i <= 10);

    printf ("Somma: %d\n", somma);
    printf ("Maggiore: %d\n", max);  


    printf ("\n");
    return 0;
}
// Marco Fiorillo 5/07/2021
