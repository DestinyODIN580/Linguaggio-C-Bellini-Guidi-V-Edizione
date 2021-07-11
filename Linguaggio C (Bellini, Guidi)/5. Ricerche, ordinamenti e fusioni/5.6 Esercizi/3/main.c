/* 53.
    Modificare il programma per la ricerca binaria in modo che visualizzi i singoli passi effettuati (cioè mostri i dati di
    Figura 5.3). Sperimentare il comportamento del programma con la ricerca dell’elemento 45 nel seguente vettore:

    vet [21, 33, 40, 41, 45, 50, 60, 66, 72, 81, 88, 89, 91, 93, 99];

*/

#include <stdio.h>

#define LEN 15
#define ELE 45

int main (int argc, char const *argv[])
{
    int vet[LEN] = {21, 33, 40, 41, 45, 50, 60, 66, 72, 81, 88, 89, 91, 93, 99};    /* vettore */
    int top;                                                                        /* var. ricerca binaria */
    int bottom;                                                                     /* var. ricerca binaria */  
    int position;                                                                   /* var. ricerca binaria */
    int i;                                                                          /* contatori */

    bottom = LEN - 1;
    top = 0;
    position = -1;


    /* esito */
    do
    {
        i = (bottom + top) / 2;

        if (vet[i] == ELE)
            position = i;
        else 
            if (vet[i] < ELE)
                top = i + 1;
            else
                bottom = i + 1;

        printf ("Top >> %d; >> %d;\n", top, vet[top]);
        printf ("Bottom >> %d; >> %d;\n", bottom, vet[bottom]);
        printf ("Position >> %d;\n", position);
        printf ("\n");
    } while (top <= bottom && position == -1);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/07/2021
