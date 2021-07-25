/* 98.
    Scrivere un programma che esegua la scansione e la visualizzazione di un vettore di stringhe.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{   
    int vetDim;                                 /* dimensione di vet */
    int c;                                      /* carattere in ingresso */
    int i;                                      /* contatore */

    char *str;                                  /* vettore */
    char *pStr;                                 /* puntatore al vettore */

    str = malloc (sizeof (int) * vetDim);


    /* assegnazione di dim */
    printf ("Inserire la dimenzione dell'array > ");
    scanf ("%d", &vetDim);
    getchar ();

    /* costruzione di vet */
    printf ("Inserire la stringa > ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* esito */
    printf ("\n");
    for (pStr = str, i = 0; i < vetDim; i++)
        printf ("%p --> %c\n", str + i, *(str + i));
    free (str);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 24/07/2021
