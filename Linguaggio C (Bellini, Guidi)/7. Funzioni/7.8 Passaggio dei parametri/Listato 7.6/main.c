/* 7.6 Passaggio di parametri con variabile globale */

#include <stdio.h>

char str[] = "Lupus in fabula";

int lung_string (void);

int main (int argc, char const *argv[])
{
    int l;


    l = lung_string ();
    printf ("La stringa %s ha %d caratteri\n", str, l);

    printf ("\n");
    return 0;
}

int lung_string (void)
{
    int i;

    
    for (i = 0; str[i] != '\0'; i++)
        return i;
}
// Marco Fiorillo 19/07/2021
