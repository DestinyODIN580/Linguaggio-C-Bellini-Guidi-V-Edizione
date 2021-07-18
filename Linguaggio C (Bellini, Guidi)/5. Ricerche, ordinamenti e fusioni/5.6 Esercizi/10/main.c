/* 60.
    Se il vettore è ordinato la ricerca completa può essere migliorata in modo da diminuire in media il numero di
    confronti da effettuare: come? Modificare in questo senso il programma esaminato nel presente capitolo.
*/

#include <stdio.h>

#define MAX_ELE 1000    /* massimo numero di elementi */

int main (int argc, char const *argv[])
{
    char vet[MAX_ELE];
    char c;

    int i, n;    


    /* Immissione lunghezza della sequenza */
    do
    {
        printf ("\nNumero di elementi: ");
        scanf ("%d", &n);
    } while (n < 1 || n > MAX_ELE);

    /* Immissione elementi della sequenza */
    for (i = 0; i < n; i++)
    {
        printf ("\nImmettere carattere n.%d: ", i);
        scanf ("%1s", &vet[i]);
    }

    printf ("Elemento da ricercare: ");
    scanf ("%1s", &c);

    /* Ricerca sequenziale ottimizzata per liste ordinate */
    i = 0; 
    while (vet[i] < c)
        i++;

    /* esito */
    if (vet[i] == c)
        printf ("\nElemento %c presente in posizione %d\n", c, i + 1);
    else
        printf ("\nElemento non presente!\n");


    printf ("\n");
    return 0;
}
