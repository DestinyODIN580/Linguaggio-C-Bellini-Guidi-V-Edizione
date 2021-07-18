/* 74.
    Scrivere un programma che, letta una stringa composta da sole lettere dell’alfabeto, visualizzi il numero delle
    vocali, quello delle consonanti e la lettera più frequente.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100
#define COL 26

int main (int argc, char const *argv[])
{
    char str[LEN];          /* stringa */
    char maxChar;           /* carattere piu'frequente */
    
    int letters[COL];       /* vettore delle occorrenze delle lettere */
    int voucalCounter;      /* numero di vocali in str */
    int consonantCounter;   /* numero di consonanti in str */
    int maxCharVal;         /* numero di occorrenze di maxChar */
    int c;                  /* carattere in ingresso */
    int i, j;               /* contatori */

    voucalCounter = consonantCounter = maxChar = i = 0;


    /* costruzione di str */
    printf ("Inserire la stringa > ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* tolower di str */
    for (i = 0; i < strlen (str); i++)
        str[i] = tolower (str[i]);

    /* inizializzazione di letters */
    for (j = 0; j < COL; j++)
        letters[j] = 0;

    /* determinazione di voucalCounter, consonantCounter e celle letters */
    for (i = 0; i < strlen (str); i++)
    {
        switch (str[i])
        {
            case ('a'):
            case ('e'):
            case ('i'):
            case ('o'):
            case ('u'):
                voucalCounter++;
                break;

            default:
                consonantCounter++;
                break;
        }

        letters[str[i] - 'a']++;
    }

    /* determinazione di maxChar */
    for (maxCharVal = letters[i = 0], maxChar = 'a'; i < COL; i++)
    {
        printf ("[%c] >> %d;\n", 'a' + i, letters[i]);
        if (maxCharVal <= letters[i])
        {
            maxCharVal = letters[i];
            maxChar = i + 'a';
        }
            
    }

    /* esito */
    printf ("Stringa               >> \"%s\"\n", str);
    printf ("Numero di vocali      >> %d\n", voucalCounter);
    printf ("Numero di consonantii >> %d\n", consonantCounter);
    printf ("Lettera piu'frequente >> %c", maxChar);
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/07/2021
