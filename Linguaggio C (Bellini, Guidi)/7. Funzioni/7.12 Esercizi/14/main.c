/* 90.
    Scrivere una procedura di conversione binario / decimale inversa a quella vista nel Listato 7.7.
    [Suggerimento: si consideri il numero binario come vettore di char di 0..1.]
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define LEN 100

int main(int argc, char const *argv[])
{
    char str[LEN];      /* stringa in binario */
    char aux;           /* var. di ausilio per l'inversione di str */

    int dec;            /* valore decimale di str */
    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = 0;


    /* costruzione di str */
    printf ("Inserire un numero binario >> ");
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';
    printf ("\n>> %s in binario in rappresenta ", str);

    /* inversione di str */
    for (i = 0, j = strlen (str) - 1; i < j; i++, j--)
    {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }

    /* conversione a decimale */
    for (dec = i = 0, j = strlen (str) - 1; i < strlen (str); i++, j--)
        dec += pow (2. , (double) i) * (str[i] - '0');

    /* esito */
    printf ("%d in decimale;\n", dec);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 24/07/2021
