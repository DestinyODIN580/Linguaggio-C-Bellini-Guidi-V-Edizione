/* 4.1 - Esempio di utilizzo di una variabile array */

/* Memorizza in un array di interi il punteggio raggiunto da sei
   studenti e ne determina il maggiore, il minore e la media    */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    int voti[6];
    int i, max, min;

    float media;


    printf ("VOTI STUDENTI\n\n");

    /* Immissione voti */
    for (i = 0; i <= 5; i++)
    {
        printf ("Voto %d° studente: ", i + 1);
        scanf ("%d", &voti[i]);
    }

    /* Ricerca del maggiore */
    max = voti[0];
    for (i = 1; i <= 5; i++)
        if (voti[i] > max)
            max = voti[i];

    /* Ricerca del minore */
    min = voti[0];
    for (i = 1; i <= 5; i++)
        if (voti[i] < min)
            min = voti[i];

    /* Calcolo della media */
    media = voti[0];
    for (i = 1; i <= 5; i++)
        media = media + voti[i];
    media = media / 6;

    /* esito */
    printf("Maggiore: %d\n", max);
    printf("Minore: %d\n", min);
    printf("Media: %f\n", media);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
