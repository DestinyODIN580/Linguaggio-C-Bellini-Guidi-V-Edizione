/* 84.
    Progettare e realizzare una funzione che, data una stringa s, calcoli il numero di occorrenze
    del carattere c all’interno della stringa
*/

#include <stdio.h>
#include <string.h>

#define LEN 100

int instancesInString (char);   /* funzione che calcola le occorrenze di c in str */

int main (int argc, char const *argv[])
{   
    char c;                     /* carattere da cercare */

    
    /* assegnazione di c */
    printf ("Inserire il carattere > ");
    scanf ("%c", &c);

    /* esito */
    printf ("Occorrenze di c in str >> %d", instancesInString (c));


    printf ("\n");
    return 0;
}

int instancesInString (char character)
{
    char str[LEN];              /* stringa */
    
    int instances;              /* istanze di c in str */
    int c;                      /* carattere in ingresso */
    int i;                      /* contatore */

    i = 0;

    
    /* costruzione di str */
    getchar ();
    printf ("Inserire la stringa > ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* calcolo di instances */
    for (instances = i = 0; i < strlen (str); i++)
        if (str[i] == character)
            instances++;


    return instances;
}
// Marco Fiorillo 23/07/2021
