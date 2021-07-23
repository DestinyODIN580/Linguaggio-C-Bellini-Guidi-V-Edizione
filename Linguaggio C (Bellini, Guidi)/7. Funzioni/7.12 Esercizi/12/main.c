/* 88.
    Scrivere una funzione che visualizzi sullo schermo

            ROSSI & SARRI SpA
    Sistema per la gestione integrata

            OPZIONI DISPONIBILI

            1. Magazzino
            2. Clienti
            3. Fornitori
            4. Personale
            0. Fine

        Scegliere una opzione:
    
    e quindi ritorni al programma chiamante la scelta effettuata dall’utente.
*/

#include <stdio.h>

int displayMenu (void);     /* menu da stampare */

int main (int argc, char const *argv[])
{
    
    /* esito */
    printf ("Scelta > %d;", displayMenu ());


    printf ("\n");
    return 0;
}

int displayMenu (void)
{
    int opt;                /* opzione scelta */


    printf ("         ROSSI & SARRI SpA         \n");
    printf (" Sistema per la gestione integrata \n");
    printf ("                                   \n");
    printf ("        OPZIONI DISPONIBILI        \n");
    printf ("                                   \n");
    printf ("        1. Magazzino               \n");
    printf ("        2. Clienti                 \n");     
    printf ("        3. Fornitori               \n");  
    printf ("        4. Personale               \n");
    printf ("        0. Fine                    \n");
    printf ("                                   \n");
    printf ("    Scegliere una opzione:         \n");
    scanf ("%d", &opt);


    return opt;
}
// Marco Fiorillo 23/07/2021
