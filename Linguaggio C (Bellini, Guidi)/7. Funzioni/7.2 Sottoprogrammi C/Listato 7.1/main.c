/* 7.1 - Dichiarazione, definizione e invocazione di una funzione */

#include <stdio.h>

double bubo (float);

int main (int argc, char const *argv[])
{
    float a;

    double b;


    printf ("Inserisci un numero: ");
    scanf ("%f", &a);

    b = cubo (a);

    printf ("%f elevato al cubo e'uguale a %f", a, b);


    printf ("\n");
    return 0;
}

double cubo (float c)
{
    return (c * c * c);
}
// Marco Fiorillo 18/07/2021