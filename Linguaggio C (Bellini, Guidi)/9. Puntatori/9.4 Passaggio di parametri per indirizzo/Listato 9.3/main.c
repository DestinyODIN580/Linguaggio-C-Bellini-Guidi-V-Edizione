/* 9.3 - Passaggio di un array */

#include <stdio.h>

int strlen (char *);

char str[] = "BATUFFO";

int main(int argc, char const *argv[])
{

    printf ("la stringa %s e'lunga %d\n", str, strlen (str));

    printf ("\n");
    return 0;
}

int strlen (char * p)
{
    int i;

    i = 0; 


    while (*p++)
        i++;


    return i;
}
// Marco Fiorillo 24/07/2021
