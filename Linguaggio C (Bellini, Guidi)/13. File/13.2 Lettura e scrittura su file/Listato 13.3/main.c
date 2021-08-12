/* 13.3 - Programma per la  copia di un file su un altro */

/* Copia di un file su un altro */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    char buf[512];                                      /* Buffer dati */

    int n;

    FILE *filePointerIn, *filePointerOut;               /* File pointer */


    filePointerIn = fopen ("ordini", "r");              /* Apre ordini in lettura */

    if (filePointerIn != NULL)
    {
        filePointerOut = fopen ("ordini.bak", "w");     /* Crea ordini.bak */
        if (filePointerOut != NULL)                     /* Ordini.bak creato correttamente? */
        {
            for (;;)                                    /* Copia ordini in ordini.bak */
            {
                n = fread (buf, 1, 512, filePointerIn); /* Legge ordini */
                if (!n)                                 /* Controllo di fine file */
                    break;
                fwrite (buf, 1, n, filePointerOut);     /* Scrive in ordini.bak */
            }
            fclose (filePointerOut);                    /* Chiude il file ordini */
            fclose (filePointerIn);                     /* Chiude il file ordini.bak */
        }
        else
        {
            printf ("Il file ordini.bak non può essere aperto");
            fclose (filePointerIn);                     /* Chiude il file ordini */
        }
    } 
    else
        /* Errore di apertura */
        printf("Il file ordini non esiste\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 12/08/2021
