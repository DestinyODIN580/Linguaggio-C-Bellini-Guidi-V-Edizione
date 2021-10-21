/* 177.
    Scrivere un CGI che, basandosi su un metodo di generazione di numeri casuali, produca ogni volta una pagina
    con un colore diverso.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* lista di colori */
char const *colori[] =
{
    "Bianco",
    "Giallo",
    "Arancione",
    "Rosso",
    "Porpora",
    "Blu",
    "Azzurro",
    "VerdeAcqua",
    "Verde",
    "Marrone",
    "Viola",
    "Nero"
};


int main (int argc, char const *argv[])
{
    int random;     /* numero random */
    int i;          /* contatore */

    time_t timer;   /* variabile per time.h */


    /* randomizzazione del seed */
    srand (time (&timer));

    /* estrazione del numero casuale */
    random = rand () % 12;
    
    /* esito */
    for (i = 0; colori[random][i] != '\0'; i++)
        printf ("%c", colori[random][i]);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 22/10/2021
