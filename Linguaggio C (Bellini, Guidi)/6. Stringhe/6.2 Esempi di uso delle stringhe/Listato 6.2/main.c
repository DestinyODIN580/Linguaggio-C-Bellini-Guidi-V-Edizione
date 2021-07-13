/* 6.2 - Copia di un array di caratteri */

/* Copia di una stringa su un'altra */

#include <stdio.h>

char frase[] = "Analisi, requisiti ";

int main (int argc, char const *argv[])
{
    char discorso[80];

    int i;


    for (i = 0; (discorso[i] = frase[i]) != '\0'; i++);

    printf (" originale: %s \n copia:   %s \n", frase, discorso);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 13/07/2021
