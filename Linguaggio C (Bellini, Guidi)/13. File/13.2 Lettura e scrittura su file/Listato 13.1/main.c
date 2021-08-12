/* 13.1 - Conta il numero di caratteri nel file clienti */

/* Determina il numero di caratteri di un file esistente */

#include <stdio.h>

int main (int argc, char const *argv[])
{
    char buf[100];      /* Buffer per la lettura */

    int n;              /* Numero caratteri letti con fread() */
    int fine_file;      /* Indica la fine della lettura del file */

    long nc;            /* Contatore caratteri */

    FILE *filePointer;  /* Puntatore a file */

    fine_file = 0;

    filePointer = fopen ("clienti", "r");   /* apertura del file clienti */

    
    if (filePointer == NULL)
        /* Si e'verificato un errore e il file non esiste */
        printf ("Errore: il file ordini non esiste\n");
    else
    {
        nc = 0;                /* inizializzazione del contatore */
        
        do
        {
            n = fread (buf, 1, 100, filePointer);

            if (!n)             /* controllo di fine file */
                fine_file = 1;
            nc += n;        /* incremento del contatore */
        } while (!fine_file);
        
    }

    fclose (filePointer);       /* hiusura del file clienti */

    printf ("Il file clienti contiene %ld caratteri\n", nc);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/08/2021
