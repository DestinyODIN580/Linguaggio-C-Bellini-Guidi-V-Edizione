/* 2.2 - Esempio di utilizzo di istruzioni composte

/* Esempio istruzioni composte */

#include <stdio.h>

int i;
int mag_100;
int min_100;

int main (int argc, char const *argv[])
{
    mag_100 = min_100 = 0;

    printf ("Dammi un inter: ");
    scanf ("%d", &i);

    if (i < 100)
    {
        printf ("minore di 100\n");
        min_100 = 1;
    }

    else
    {
        printf ("maggiore o uguale a 100\n");
        mag_100 = 1;
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
