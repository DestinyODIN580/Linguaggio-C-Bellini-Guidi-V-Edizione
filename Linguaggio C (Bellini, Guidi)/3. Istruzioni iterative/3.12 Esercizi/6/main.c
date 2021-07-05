/* 29.
    Predisporre un programma che visualizzi la tavola pitagorica del sistema di numerazione decimale.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int i, j;       /* contarori */  


    /* esito */
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
            printf ("%3d ", i * j);

        printf ("\n");
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
