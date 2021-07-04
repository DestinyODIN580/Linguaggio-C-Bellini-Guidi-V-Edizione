/* 2.3.2 - Due esempi di input output di caratteri (2/2) */

#include <stdio.h>

int main (int argc, char const *argv[])
{   
    char x, y, z;


    printf ("Digita tre carat.: ");
    x = getchar ();
    y = getchar ();
    z = getchar ();

    printf ("Hai digitato: ");
    putchar (x);
    putchar (y);
    putchar (z);
    putchar ('\n');
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
