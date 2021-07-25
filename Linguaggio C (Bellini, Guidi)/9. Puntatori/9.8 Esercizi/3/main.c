/* 99.
    Scrivere una funzione che ritorni un puntatore alla prima occorrenza della stringa t in una stringa s. Se la stringa t
    non e' contenuta in s allora la funzione ritorna un puntatore NULL.
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 100

char *pOccurrence (char *, char *);

int main (int argc, char const *argv[])
{
    int c;                                      /* carattere in ingresso */
    int i;                                      /* contatore */


    char *str1;                                 /* stringa s */
    char *str2;                                 /* stringa t */
    char *pStr1;                                /* puntatore a s */
    char *pStr2;                                /* puntatore a t */            

    i = 0;                      
    str1 = malloc (sizeof (char) * LEN);
    str2 = malloc (sizeof (char) * LEN);


    /* costruzione di str1 */
    printf ("Stringa 1 > ");
    while ((c = getchar ()) != '\n')
        str1[i++] = c;
    str1[i] = '\0';
    printf (">> %s\n", str1);

    /* costruzione di str2 */
    printf ("Stringa 2 > ");
    i = 0; 
    while ((c = getchar ()) != '\n')
        str2[i++] = c;
    str2[i] = '\0';
    printf (">> %s\n", str2);

    pStr1 = &str1[0];
    pStr2 = &str2[0];
  
    /* stampa dei puntatori a s e t */
    printf ("\ns >> %p;\nt >> %p;\n\n", pStr1, pStr2);

    /* stampa degli indirizzi degli elementi di s */
    for (i = 0; *(pStr1 + i) != '\0'; i++)
        printf ("s > [%d] >> %p;\n", i, pStr1 + i);

    /* esito */
    printf ("\ns >> %p", pOccurrence (pStr1, pStr2));
    

    printf ("\n");
    return 0;
}

char *pOccurrence (char *s, char *t)
{
    int out;                                    /* flag */
    int i, j;                                   /* contatori */


    /* controllo della presenza di t in s */
    for (out = i = 0; *(s + i) != '\0' && !out; i++)
        if (*(t) == *(s + i))
            for (out = j = 1; *(t + j) != '\0'; j++)
                if (*(t + j) != *(s + i + j))
                    out = 0; 

    if (out)
        return s + i - 1;
    else
        return NULL;
}
// Marco Fiorillo 25/07/2021