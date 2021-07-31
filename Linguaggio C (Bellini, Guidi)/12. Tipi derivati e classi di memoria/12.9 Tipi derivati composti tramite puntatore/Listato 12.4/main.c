/* 12.4 - Un array di puntatori scandito da un puntatore di puntatore */

#include <stdio.h>

char *menu [] = 
{
    "1. Voce di menu 1\n",
    "2. Voce di menu 2\n",
    "3. Voce di menu 3\n",
    /* ... */
    "N. Voce di menu N\n",
    NULL
};

char **ppc = menu;

int main (int argc, char const *argv[])
{
    char *pausa;

    
    while (*ppc != NULL)    
        printf ("%s", *ppc++);

    gets (pausa);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 31/07/2021
