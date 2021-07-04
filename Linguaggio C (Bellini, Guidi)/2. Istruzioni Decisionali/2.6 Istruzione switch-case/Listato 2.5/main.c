/* 2.5 - Piu'valori costanti corrispondono allo stesso gruppo di istruzioni */

/* Esempio utilizzo case */

#include <stdio.h>

char x;

int main (int argc, char const *argv[])
{
    printf ("Digita una cifra: ");
    scanf ("%c", &x);

    switch (x)
    {
        case ('2'):
        case ('4'):
        case ('6'):
            printf ("pari\n");
            break;
        
        case ('1'):
        case ('3'):
        case ('5'):
            printf ("dispari\n");
            break;

        default:
            printf ("altro\n");
            break;
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
