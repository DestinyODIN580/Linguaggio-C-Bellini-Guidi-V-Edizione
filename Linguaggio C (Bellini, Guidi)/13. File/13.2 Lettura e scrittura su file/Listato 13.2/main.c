/* 13.2 - Programma per l'acquisizione di una stringa da tastiera
    e sua scrittura in un file */

/* Scrittura di una stringa in un file */

#include <stdio.h>
#include <string.h>

int main (int argc, char const *argv[])
{
<<<<<<< HEAD
    char buf[100];      /* Buffer */

    int len;            

    FILE *filePointer;  /* File pointer */


    /* Legge da tastiera il nome del fornitore */
    printf ("Inserisci un fornitore: ");
    scanf ("%s", buf);

    len = strlen (buf);
    filePointer = fopen ("fornitori", "w");  /* Crea il file fornitori*/

    /* Memorizza il nome del fornitore nel file */
    fwrite (buf, 1, len, filePointer);
    fclose (filePointer);                    /* Chiude il file */
=======
    char buf[100];/* Buffer */

    int len;

    FILE *fp;       /* File pointer */
    
    
    /* Legge da tastiera il nome del fornitore */
    printf("Inserisci un fornitore : ");
    scanf("%s",buf);

    len = strlen(buf);

    fp = fopen("fornitori", "w"); /* Crea il file fornitori */

    /* Memorizza il nome del fornitore nel file */
    fwrite(buf, 1, len, fp);

    /* Chiude il file */
    fclose(fp);
>>>>>>> dc3204f8c25c63836130be47c6202abf6df284ab


    printf ("\n");
    return 0;
}
<<<<<<< HEAD
// Marco Fiorillo 12/08/2021
=======
// Marco Fiorillo 14/08/2021
>>>>>>> dc3204f8c25c63836130be47c6202abf6df284ab
