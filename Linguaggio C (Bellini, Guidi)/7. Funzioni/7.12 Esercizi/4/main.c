/* 80.
    Scrivere una funzione che calcoli il numero di caratteri e cifre presenti in una stringa passata come variabile
    globale.
*/

#include <stdio.h>

#define LEN 10

int charsCounter (void);    /* ritorna i caratteri in una stringa */
int numbsCounter (void);    /* ritorna i numeri in una stringa */

char string[LEN] = "aBcDe01234";

int main (int argc, char const *argv[])
{
    int i;                  /* contatore */
    

    /* esito */
    printf ("Caratteri >> %d;\n", charsCounter());
    printf ("Cifre     >> %d;\n", numbsCounter());


    printf ("\n");
    return 0;
}

int charsCounter (void)
{
    int characters;         /* caratteri in str */
    int i;                  /* contatore */
    

    /* calcolo di characters */
    for (characters = i = 0; i < LEN; i++)
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))
            characters++;


    return characters;
}

int numbsCounter (void)
{
    int numbers;            /* numeri in str */
    int i;                  /* contatore */
    

    /* calcolo di numbers */
    for (numbers = i = 0; i < LEN; i++)
        if (string[i] >= '0' && string[i] <= '9')
            numbers++;


    return numbers;
}
// Marco Fiorillo 20/07/2021
