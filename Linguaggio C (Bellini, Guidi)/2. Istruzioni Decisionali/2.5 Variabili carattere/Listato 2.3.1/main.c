/* 2.3.1 - Due esempi di input output di caratteri (1/2) */

#include <stdio.h>

int main (int argc, char const *argv[])
{   
    char x, y, z;


    printf ("Digita tre carat.: ");
    scanf ("%c%c%c", &x, &y,&z);

    printf ("Hai digitato: ");
    printf ("%c%c%c\n", x, y, z);
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
