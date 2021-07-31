/* 122.
    Scrivere un programma per l’inserimento e visualizzazione di un gruppo di automobili descritte da marca, modello e
    numero di unità vendute. Il gruppo di automobili è inserito dall’utente del programma.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 100

void struct_visualizer (int);   /* visualizza tutti gli struct di un tipo */

struct struct_automobili        /* automobili per modello, marca e unita'vendute */
{
    char model[LEN]; 
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
    for (i = j = 0; i < num; i++, j = 0)
    {
        /* assegnazione autmobili[i].model */
        printf ("\nInserire modello > ");
        while ((c = getchar ()) != '\n')
            str[j++] = c;
        str[j] = '\0';
        strcpy (automobili[i].model, str);

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

        struct_visualizer (i + 1);
    }
    

    printf ("\n");
    return 0;
}

void struct_visualizer (int i)
{
    int j;      /* contatore */


    /* esito */
    for (j = 0; j < i; j++)
    {
        printf ("\n----------------\n");
        printf ("Modello > %s;\n", automobili[j].model);
        printf ("Marca   > %s;\n", automobili[j].brand);
        printf ("Vendite > %d;\n", automobili[j].selled);
        printf ("\n----------------\n");
    }

    return ;
}
// Marco Fiorillo 31/07/2021
