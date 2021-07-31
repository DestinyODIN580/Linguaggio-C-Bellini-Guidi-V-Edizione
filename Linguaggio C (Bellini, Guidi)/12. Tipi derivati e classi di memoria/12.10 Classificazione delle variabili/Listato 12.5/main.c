/* 12.5 - Variabili locali e globali */

#include <stdio.h>
#include <string.h>

#define DIM 31
#define TAPPO "THE END"

void vis_per(void);

/* semplice struttura che modella una persona */
struct per
{
    char cognome[DIM];
    char nome[DIM];
    char ind[DIM];

    int eta;
};

/* vettore di persone */
struct per anag[] =
{
    {
        "Edison", "Thomas", "Vicolo della Lampadina, 8", 30
    },

    {
        "Alighieri", "Dante", "Via del Purgatorio, 13", 21
    },

    {
        "More", "Thomas", "Viale Utopia, 48", 39
    },

    {
        TAPPO, TAPPO, TAPPO, 0
    }
};

int main (int argc, char const *argv[])
{


    vis_per ();


    printf ("\n");
    return 0;
}

void vis_per (void)
{
    char pausa;
    
    int i;


    for (i=0; strcmp (anag[i].cognome, TAPPO) != 0 ; i++)
    {
        printf("\n\n--------------------\n");
        printf("\n\t\tCognome : %s", anag[i].cognome);
        printf("\n\t\tNome : %s", anag[i].nome);
        printf("\n\t\tIndirizzo : %s", anag[i].ind);
        printf("\n\t\tEtà : %d", anag[i].eta);
        printf("\n\n--------------------\n");
        scanf("%c", &pausa);
    }
}
// Marco Fiorillo 31/07/2021
