/* 6.6 - Esempio di utilizzo di strcmp */

/* Confronto tra due stringhe con strcmp */

#include <stdio.h>
#include <string.h>

char prima[160] = "mareggiata";

int main (int argc, char const *argv[])
{
    char seconda[80];
    int i, x;


    printf ("Inserisci una parola: ");
    for (i = 0; (seconda[i] = getchar ()) != '\n' && (i < 80); i++);

    seconda[i] = '\0';

    if (!(x = strcmp (prima, seconda)))
        printf ("Sono uguali\n");
    else
        if (x > 0)
            printf ("La prima e'maggiore della seconda\n");
        else    
            printf ("La seconda e'maggiore della prima\n");

    printf ("\n");
    return 0;
}
// Marco Fiorillo 13/07/2021
