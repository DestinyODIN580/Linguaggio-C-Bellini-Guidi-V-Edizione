/* 49.
    Scrivere un programma che richieda all’utente i voti delle otto prove sostenute durante l’anno da diciotto
    studenti di una classe e calcoli la media di ogni studente, la media di ogni prova e la media globale. Il programma dovrà
    infine visualizzare l’intera matrice e la media globale. [Suggerimento: si utilizzi una matrice di 19 linee e 9 colonne
    dove nelle prime otto vengono memorizzati in ciascuna linea i voti di uno studente e nella nona la rispettiva media;
    nella diciannovesima linea viene invece memorizzata la media per prova.]
*/

#include <stdio.h>

#define ROWS 18
#define COLS 8

int main (int argc, char const *argv[])
{
    int i, j;               /* contatori */

    float mat[ROWS][COLS];  /* matrice dei voti */
    float avgTest[COLS];    /* media della singola prova */
    float avgStud;          /* media dello studente */


    /* inizializzazione di avgTest */
    for (i = 0; i < COLS; i++)
        avgTest[i] = 0;

    /* costruzione di mat */
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf ("Studente %d -> voto %d > ", i + 1, j + 1);
            scanf ("%f", &mat[i][j]);
        }
        printf ("\n");
    }

    /* esito (stampa della matrice e delle medie degli alunni) */
    for (i = 0; i < ROWS; i++)
    {
        printf ("Studente %2d  >> | ", i + 1);
        for (avgStud = j = 0; j < COLS; j++)
        {
            printf ("%2.2f | ", mat[i][j]);
            avgStud += mat[i][j];
            avgTest[j] += mat[i][j];
        }
        printf ("\tMedia >> %.2f;\n", avgStud / (float) COLS);
    }

    /* esito (stampa della media delle singole prove) */
    printf ("\nMedie prove  >> | ");
    for (i = 0; i < COLS; i++)
        printf ("%2.2f | ", avgTest[i] / (float) ROWS);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 10/07/2021
