/* Listato 13.8 - Programma che copia i cintenuti di un file in un altro
    utilizzando i file descriptor */

/* Copia il contenuto di un file in un altro */

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main (argc, argv)
int argc;
char **argv;
{
    static char buf[BUFSIZ];
    int fdin, fdout, n;
    
    if (argc != 3)
    {
        printf ("Devi specificare file sorgente e destinazione\n");
        exit (1);
    }

    /* Apre il file sorgente */
    fdin = open (argv[1],O_RDONLY);
    if (fdin < 0)
    {
        printf ("Non posso aprire %s\n",argv[1]);
        exit (2);
    }

    /* Apre il file destinazione */
    fdout = open (argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fdout < 0)
    {
        printf ("Non posso creare %s\n", argv[2]);
        close (fdin);
        exit (3);
    }

    /* Esegue il ciclo di lettura e scrittura */
    for(;;)
    {
        /* Legge BUFSIZ caratteri da file */
        n = read(fdin, buf, BUFSIZ);
        /* Controlla la fine del file */
        if (n == 0)
            break;
        /* Scrive i caratteri nel file destinazione */
        write (fdout,buf,n);
    }

    /* Chiude i file */
    close (fdin);
    close (fdout);
}
// Marco Fiorillo 29/08/2021
