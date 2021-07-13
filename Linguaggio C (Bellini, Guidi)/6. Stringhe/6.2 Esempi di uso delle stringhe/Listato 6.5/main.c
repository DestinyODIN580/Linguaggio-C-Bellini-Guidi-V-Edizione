/* 6.5 - Confronto di array di caratteri */

/* Concatenazione di due stringhe introduzione della
    seconda stringa con getchar */

#include <stdio.h>

char prima[160] = "mareggiata";

int main (int argc, char const *argv[])
{
    char seconda[80];

    int i;


    printf ("Inserisci una parola: ");
    for (i = 0; (seconda[i] = getchar ()) != '\n' && (i < 80); i++);

    seconda[i] = '\0';
    
    for (i = 0; (prima[i] == seconda[i]) && (prima[i] != '\0') && (seconda[i] = '\0'); i++);

    if (prima[i] == seconda[i])
        printf ("Sono uguali\n");
    else
        if (prima[i] > seconda[i])
            printf ("La prima e'maggiore della seconda\n");
        else    
            printf ("La seconda e'maggiore della prima\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 13/07/2021
