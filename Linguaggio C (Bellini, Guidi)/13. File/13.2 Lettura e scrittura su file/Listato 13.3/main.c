/* 13.3 - Programma per la copia di un file su un altro */

/* Copia di un file su un altro */

#include <stdio.h>


int main (int argc, char const *argv[])
{
    char buf[250];      /* Buffer dati */

    int n;

    FILE *fileIn;
    FILE *fileOut;


    fileIn = fopen ("ordini", "r");     /* Apre ordini in lettura */

    if (fileIn != NULL)
    {
        fileOut = fopen ("ordini.bak", "w");    /* Crea ordini.bak */

        if (fileOut != NULL)                    /* ordini.bak creato correttamente? */
        {
            for (;;)                            /* Copia ordini in ordini.bak */
            {
                n = fread (buf, 1, 512, fileIn);/* Legge ordini */

                if (!n)                         /* Controllo di fine file */
                    break;

                fwrite (buf, 1, n, fileOut);    /* Scrive in ordini.bak */
            }

            fclose (fileIn);                    /* Chiude il file ordini */
            fclose (fileOut);                   /* Chiude il file ordini.bak */
        }       
        else
        {
            printf ("Il file ordini.bak non puo'essere aperto\n");
            fclose (fileIn);                    /* Chiude il file ordini */
        }
    }
    else
        /* Errore di apertura */
        printf ("Il file ordini non esiste\n");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 
