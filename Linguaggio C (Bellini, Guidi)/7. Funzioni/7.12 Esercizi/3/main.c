/* 79.
    Scrivere una funzione che, data una stringa di caratteri, converta tutte le lettere minuscole in maiuscole. Si passi la
    stringa tramite variabile globale.
*/

#include <stdio.h>

#define LEN 12

char touppercase (int i);   /* ritorna una strunga con tutte le lettere minuscole in maiuscole */

char string[LEN] = "AaBbCcDdEeFf";  

int main (int argc, char const *argv[])
{   
    int i;                  /* contatore */


    /* esito */
    for (i = 0; i < LEN; i++)
        printf ("%c", touppercase (i));


    printf ("\n");
    return 0;
}

char touppercase (int i)
{

    /* conversione */
    if (string[i] >= 'a' && string[i] <= 'z')
        string[i] -= 32;


    return string[i];
}
// Marco Fiorillo 20/07/2021