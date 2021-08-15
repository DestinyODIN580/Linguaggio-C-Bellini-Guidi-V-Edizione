<<<<<<< HEAD
/* 13.3 - Programma per la  copia di un file su un altro */
=======
/* 13.3 - Programma per la copia di un file su un altro */
>>>>>>> dc3204f8c25c63836130be47c6202abf6df284ab

/* Copia di un file su un altro */

#include <stdio.h>

<<<<<<< HEAD
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
=======

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
>>>>>>> dc3204f8c25c63836130be47c6202abf6df284ab


    printf ("\n");
    return 0;
}
<<<<<<< HEAD
// Marco Fiorillo 12/08/2021
=======
// Marco Fiorillo 
>>>>>>> dc3204f8c25c63836130be47c6202abf6df284ab
