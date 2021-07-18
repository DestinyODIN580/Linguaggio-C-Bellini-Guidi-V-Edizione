/* 75.
    Scrivere un programma che, letta una stringa composta da sole cifre (0..9), visualizzi accanto a ogni cifra il numero
    di volte che questa compare nella stringa. (Attenzione: si scriva un programma che utilizzi un solo ciclo.)   
*/

#include <stdio.h>
#include <string.h>

#define LEN 100
#define NUM 10

int main (int argc, char const *argv[])
{
    char str[LEN];  /* stringa di cifre */

    int nums[NUM];  /* vettore di occorrenze */
    int c;          /* carattere in ingresso */
    int i;          /* contatore */

    i = 0;


    /* costruzione di str */
    printf ("Inserire la stringa >> ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* inizializzazione di nums */
    for (i = 0; i < NUM; i++)
        nums[i] = 0;

    /* costruzione di nums */
    for (i = 0; i < strlen (str); i++)
        nums[str[i] - '0']++;

    /* esito */
    printf ("Stringa >> \"%s\"\n", str);
    for (i = 0; i < NUM; i++)
        printf ("[%d] >> %d;\n", i, nums[i]);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 18/07/2021
