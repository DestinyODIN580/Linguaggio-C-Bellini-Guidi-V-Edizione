/* 13.4 - Visualizzazione della dimensione di un file con fseek e ftell */

/* Determinazione del numero di caratteri di un file
    con fseek() e ftell() */

#include <stdio.h>

int main (int argc, char **argv)
{
    long n;

    FILE *fp;


    if (argc < 2 )
        printf ("File non specificato\n");
    else 
    {
        fp = fopen(argv[1], "r");   /* Apertura del file */

        if (fp != NULL )/* Il file esiste? */
        {
            fseek(fp,0L,2); /* Puntatore alla fine del file */
        
            n = ftell(fp);  /* Lettura posizione del puntatore */
        
            fclose(fp);     /* Chiusura del file */

            printf("La dimensione del file è %ld\n", n);
        }
        else
        printf("Errore : il file %s non esiste\n", argv[1]);
    }   
}
// Marco Fiorillo 14/08/2021
