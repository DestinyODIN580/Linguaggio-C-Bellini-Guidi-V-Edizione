/* 78.
    Scrivere una funzione che visualizzi un messaggio a una generica coordinata x, y dello schermo. Si consideri uno
    schermo con 25 righe e 80 colonne.
*/

#include <stdio.h>
#include <string.h>

#define ROWS 25
#define COLS 80

void printMessage (char);       /* funzione che stampa a schermo il carattere passato */

int main (int argc, char const *argv[])
{
    char screen[ROWS][COLS];    /* schrmo 25 x 80 */
    char message[ROWS];         /* messaggio da stampare su "schermo" */

    int messageRow;             /* riga del messaggio nello schermo */
    int messageCol;             /* colonna del messaggio nello schermo */
    int c;                      /* carattere in ingresso */
    int i, j;                   /* contatori */

    i = 0; 

    /* costruzione di message */
    printf ("Messaggio da visualizzare > ");
    while ((c = getchar ()) != '\n')
        message[i++] = c;
    message[i] = '\0';

    /* assegnazione di messageRow */
    printf ("Riga > ");
    scanf ("%d", &messageRow);

    /* assegnazione di messageCol */
    printf ("Colonna > ");
    scanf ("%d", &messageCol);

    /* inizializzazione di screen */
    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            screen[i][j] = ' '; 

    /* scrittura di message su screen */
    for (i = 0; i < strlen (message); i++, messageCol++)
        screen[messageRow][messageCol] = message[i];

    /* esito */
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
            printMessage (screen[i][j]);
        printf ("\n");
    }


    printf ("\n");
    return 0;
}

void printMessage (char character)
{
    printf ("%c", character);
}
// Marco Fiorillo 19/07/2021
