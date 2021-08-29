/* 13.5 - Programma che conta il numero di righe di un file */

/* Determinazione del numero di linee contenute in un file.
    Ogni linea è definita dal carattere di newline \n */

#include <stdio.h>

int main (int argc, char **argv)
{
    char buf[100];

    int linee;

    FILE *fp;


    if (argc < 2)
        printf("Errato numero di parametri\n");
    else
    {
        fp = fopen (argv[1], "r");   /* Apre il file */
        if (fp != NULL)               /* Il file esiste? */
        {
            linee = 0;              /* Inizializza contatore di linea */
            for(;;)                 /* Ciclo di lettura da file */
            {
                if (fgets (buf,100,fp) == NULL ) /* Fine file */
                    break;          
                linee++;                /* Incrementa contatore linee */
            }
            fclose (fp);                 /* Chiude il file */
            printf ("Il file contiene %d linee\n", linee);
        }
        else
            printf ("Il file %s non esiste\n",argv[1]);
    }
}
// Marco Fiorillo 29/08/2021
