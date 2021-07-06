/* 37.
    Modificare il programma, esaminato nel presente capitolo, che determina il maggiore, il minore e la media degli
    elementi di un array in modo che vengano diminuiti in media il numero di confronti effettuati nel ciclo durante
    l’esecuzione.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int voti[6];        /* vettore con i voti */
    int i, j;           /* contatori */
    int max, min;       /* voto massimo e minimo */
    int aux;            /* variabile di appoggio */

    float media;        /* media dei voti */


    printf ("VOTI STUDENTI\n\n");

    /* Immissione voti */
    for (i = 0; i < 6; i++)
    {
        printf ("Voto %d° studente: ", i + 1);
        scanf ("%d", &voti[i]);
    }

    /* Bubblesorting del vettore*/
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (voti[j] > voti[j + 1])
            {
                aux = voti[j + 1];
                voti[j + 1] = voti[j];
                voti[j] = aux;
            }

    /* Stampa del vettore ordinato */
    printf ("\nVettore ordinato --> [ ");
    for (i = 0; i < 6; i++)
        printf ("%d ", voti[i]);
    printf ("];\n");

    /* Calcolo della media */
    media = voti[0];
    for (i = 1; i < 6; i++)
        media += voti[i];
    media /= 6;

    /* esito */
    printf("\nMaggiore: %d\n", max = voti[5]);
    printf("Minore: %d\n", min = voti[0]);
    printf("Media: %f\n", media);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
