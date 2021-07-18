/* 73.
    Scrivere un programma che richieda all’utente un carattere e una stringa e calcoli quindi il numero di occorrenze del
    carattere nella stringa.
*/

#include <stdio.h>
#include <string.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char str[LEN];      /* stringa */
    char letter;        /* lettera da ricercare in str */

    int letterCounter;  /* numero di occorrenze di letter in str */
    int c;              /* carattere in ingresso */
    int i;              /* contatore */

    i = 0;


    /* costruzione str */
    printf ("Inserire la stringa >> ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* assegnazione di letter */
    printf ("Carattere da ricercare >> ");
    letter = getchar();

    /* determinazione di letterCounter */
    for (letterCounter = i = 0; i < strlen (str); i++)
        if (str[i] == letter)
            letterCounter++;

    /* esito */
    printf ("Occorrenze di %c in %s >> %d", letter, str, letterCounter);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/07/2021
