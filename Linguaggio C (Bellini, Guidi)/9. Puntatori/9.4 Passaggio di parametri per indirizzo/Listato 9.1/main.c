/* 9.1 - Il passaggio dei parametri per indirizzo */

#include <stdio.h>

void scambia (int, int);

int main(int argc, char const *argv[])
{
    int x, y;

    x = 8;
    y = 16;


    printf ("Prima dello scambio\n");
    printf ("x = %d, y = %d\n", x, y);

    scambia (x, y);

    printf ("Dopo lo scambio\n");
    printf ("x = %d, y = %d\n", x, y);


    printf ("\n");
    return 0;
}

/* Versione KO di scambia */
void scambia (int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;


    return ;
}
// Marco Fiorillo 24/07/2021
