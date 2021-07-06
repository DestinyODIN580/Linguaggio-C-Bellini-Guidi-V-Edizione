/* 42.
    Scrivere un programma che, inizializzato un vettore di char con una stringa di lettere dell’alfabeto e
    punteggiatura, visualizzi il numero complessivo delle vocali e delle consonanti del vettore.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char str[LEN];      /* stringa */

    int voucCounter;    /* vocali in str */
    int consCounter;    /* consonanti in str */
    int i;              /* contatore */
    int c;              /* carattere in ingresso */

    i = 0;


    /* costruzione di str */
    while ((c = getchar ()) != '\n')
        str[i++] = c;
    str[i] = '\0';

    /* tolower() applicato a str */
    for (i = 0; i < strlen (str); i++)
        str[i] = tolower (str[i]);

    /* determinazione di voucCounter e consCounter */
    for (voucCounter = consCounter = i = 0; i < strlen (str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            voucCounter++;
        else if (str[i] > 'a' && str[i] <= 'z')
            consCounter++;
    }

    /* esito */
    printf ("\nStringa    >> %s;", str);
    printf ("\nVocali     >> %d;", voucCounter);
    printf ("\nConsonanti >> %d;", consCounter);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
