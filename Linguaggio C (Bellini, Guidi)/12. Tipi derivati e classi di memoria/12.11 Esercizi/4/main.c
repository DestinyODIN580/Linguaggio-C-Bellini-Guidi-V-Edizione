/* 125.
    Riscrivere il programma dell’Esercizio 1 come nell’esercizio precedente, ma mettendo
    la funzione main in un file sorgente e le funzioni di inserimento e visualizzazione in un altro.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "functions.h"

#define LEN 100


struct struct_model             /* struct del modello */
{
    char code[LEN];
    char description[LEN];

    int year;

} model[LEN];

struct struct_automobili        /* automobili per modello, marca e unita'vendute */
{
    struct struct_model model; 
    char brand[LEN]; 

    int selled;
} automobili[LEN];

int main (int argc, char const *argv[])
{   
    char str[LEN];      /* stringa */

    int num;            /* numero di struct automobili da inserire */
    int c;              /* carattere in ingresso */
    int i, j;           /* contatori*/

    i = 0;    


    /* assegnazione di num */
    printf ("Quante automobili si vogliono inserire > ");
    scanf ("%d", &num);
    getchar ();

    /* costruzione di struct automobili */
    for (i = 0; i < num; i++)
    {
        /* inserimento dei dati */
        data_registering (i);

        /* stampa dei dati registrati */
        struct_visualizer (i + 1);
    }
    

    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/08/2021
