/* 124.
    Scomporre in funzioni il programma di inserimento e visualizzazione di un gruppo di automobili.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 100

void data_registering (int);   /* inserimento dei dati */
void struct_visualizer (int);   /* visualizza tutti gli struct di un tipo */

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

void data_registering (int i)
{
    char str[LEN];  /* stringa */

    int c;          /* carattere in ingresso */
    int j;          /* contatore */

    j = 0;


    /* assegnazione autmobili[i].model.code */
    printf ("\nInserire codice > ");
    while ((c = getchar ()) != '\n')
        str[j++] = c;
    str[j] = '\0';
    strcpy (automobili[i].model.code, str);

    /* assegnazione automobili[i].model.description */
    printf ("\nInserire descrizione > ");
    j = 0;
    while ((c = getchar ()) != '\n')
        str[j++] = c;
    str[j] = '\0';
    strcpy (automobili[i].model.description, str);

    /* assegnazione automobili[i].model.year */
    printf ("\nInserire anno > ");
    scanf ("%d", &automobili[i].model.year);
    getchar ();

    /* assegnazione autmobili[i].brand */
    printf ("Inserire marca > ");
    j = 0;
    while ((c = getchar ()) != '\n')
        str[j++] = c;
    str[j] = '\0';
    strcpy (automobili[i].brand, str);

    /* assegnazione autmobili[i].selled */
    printf ("Inserire vendite > ");
    scanf ("%d", &automobili[i].selled);
    getchar ();
}

void struct_visualizer (int i)
{
    int j;      /* contatore */


    /* esito */
    for (j = 0; j < i; j++)
    {
        printf ("\n----------------\n");
        printf ("Codice > %s;\n", automobili[j].model.code);
        printf ("Descrizione > %s;\n", automobili[j].model.description);
        printf ("Anno > %d;\n", automobili[j].model.year);
        printf ("Marca   > %s;\n", automobili[j].brand);
        printf ("Vendite > %d;\n", automobili[j].selled);
        printf ("\n----------------\n");
    }

    return ;
}
// Marco Fiorillo 1/08/2021
