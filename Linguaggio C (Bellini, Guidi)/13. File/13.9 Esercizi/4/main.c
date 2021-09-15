/* 130.
    Scrivere un programma che apra un file, legga e visualizzi una riga, poi
    torni indietro all’inizio del file e legga nuovamente una linea. Ovviamente
    le due letture devono produrre il medesimo risultato.
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char buffer[LEN];       /* buffer per la riga letta */

    FILE *fp;               /* puntatore al file */

    fp = fopen ("file.txt", "a+");


    /* scan della prima riga */
    fscanf (fp, "%s\n", buffer);

    /* esito */
    printf ("1 >> %s\n", buffer);

    /* reset del puntatore a inizio file */
    fseek (fp, 0L, SEEK_SET);

    /* scan della prima riga */
    fscanf (fp, "%s\n", buffer);

    /* esito */
    printf ("2 >> %s\n", buffer);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 15/09/2021
