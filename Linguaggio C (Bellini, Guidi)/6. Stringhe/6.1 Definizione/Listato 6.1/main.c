/* 6.1 - Visualizzazione di differenti rappresentazioni di caratteri */

/* Visualizzazione caratteri di una stringa */

#include <stdio.h>

char frase[] = "Analisi, requisiti ";

int main (int argc, char const *argv[])
{
    int i;

    i = 0;


    while (frase[i] != '\0')
        printf ("%c = %d = %o \n", frase[i], frase[i], frase[i++]);


    printf ("\n");
    return 0;
}
//
