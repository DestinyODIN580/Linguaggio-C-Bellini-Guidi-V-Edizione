#include "functions.h"

#include <stdio.h>


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
// Marco Fiorillo 11/08/2021
