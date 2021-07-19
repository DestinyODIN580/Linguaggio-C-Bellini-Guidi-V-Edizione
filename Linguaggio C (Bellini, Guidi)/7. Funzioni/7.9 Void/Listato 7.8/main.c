/* 7.8 - Funzioni senza parametri */

#include <stdio.h>

void mess_err (void);

int main(int argc, char const *argv[])
{
    int a, b, c;


    printf ("Inserire dividendo: ");
    scanf ("%d", &a);

    printf ("Inserire divisore: ");
    scanf ("%d", &b);
    
    if (b != 0)
    {
        c = a / b;
        printf ("%d diviso %d = %d\n", a, b, c);
    }
    else
        mess_err ();


    printf ("\n");
    return 0;
}

void mess_err (void)
{
    char c;

    int i;


    for (i = 0; i <= 20; i++)
        printf ("\n");
    
    printf ("ERRORE! DENOMINATORE NULLO");

    printf ("\n Premere un tasto per continuare\n");
    scanf ("%c%c", &c, &c);
}
// Marco Fiorillo 19/07/2021
