/* 13.6 - Programma che conta il numero di caratteri numerici contenuti in un file */

/* Determinazione del numero di caratteri numerici (cifre decimali) presenti in un file */

#include <stdio.h>

int main(int argc, char **argv)
{
    int c;
    int nc;

    FILE *fp;


    if (argc < 2)
        printf("Errato numero di parametri\n");
    else 
    {
        fp = fopen (argv[1],"r");               /* Apre il file */
        if (fp != NULL)                         /* Il file esiste? */   
        {           
            nc = 0;                             /* Inizializza il contatore */
            while ((c = fgetc (fp)) != EOF)     /* Ciclo di lettura */
                if (c >= '0' && c <= '9')
                    nc++;                       /* Incrementa il contatore */
            fclose (fp);                        /* Chiude il file */
        printf("Il numero di caratteri numerici è: %d\n", nc);  
        }
        else
            printf("Il file %s non esiste\n");
    }
}
// Marco Fiorillo 29/08/2021
