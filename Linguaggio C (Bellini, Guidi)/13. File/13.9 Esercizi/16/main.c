/* 142. 
    [Fusione di due file] Supponendo che i file rubrica1 e rubrica2 siano ordinati per nome, scrivere un
    programma che crei un nuovo file ordinato rubrica che contiene i dati di entrambi i file.
*/

#include <stdio.h>
#include <string.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    char buffer[LEN];
    char buffer2[LEN];
    char auxBuffer[LEN];
    char mat[LEN][LEN];

    int index;
    int i, j, k;

    FILE *fp;
    
    index = 0;

    fp = fopen ("rubrica1.txt", "r");


    /* importazione in mat di rubrica1.txt */
    while (!feof (fp))
    {
        fscanf (fp, "%s\n", buffer);

        for (j = 0; buffer[j] != '\0'; j++) 
            mat[index][j] = buffer[j];
        mat[index++][j] = '\0';  
    }
    fclose (fp);


    /* importazione in mat di rubrica2.txt */
    fp = fopen ("rubrica2.txt", "r");

    while (!feof (fp))
    {
        fscanf (fp, "%s\n", buffer);

        for (j = 0; buffer[j] != '\0'; j++) 
            mat[index][j] = buffer[j];
        mat[index++][j] = '\0'; 
    }
    fclose (fp);

    /* ordinamento di mat */
    for (i = 0; i < index - 1; i++)
        for (j = 0; j < index - 1; j++)
        {
            for (k = 0; mat[j][k] != '\0'; k++)
                buffer[k] = mat[j][k];
            buffer[k] = '\0';

            for (k = 0; mat[j + 1][k] != '\0'; k++)
                buffer2[k] = mat[j + 1][k];
            buffer2[k] = '\0';

            if (strcmp (buffer, buffer2) > 0)
            {
                strcpy (auxBuffer, buffer2);

                for (k = 0; mat[j][k] != '\0'; k++)
                    mat[j + 1][k] = mat[j][k];
                mat[j + 1][k] = '\0';

                for (k = 0; mat[j][k] != '\0'; k++)
                    mat[j][k] = auxBuffer[k];
                mat[j][k] = '\0';
            }
        }
    
    /* stampa della matrice ordinata */
    printf ("\n --- \n");
    for (i = 0; i < index; i++)
    {
        for (j = 0; mat[i][j] != '\0'; j++)
            printf ("%c", mat[i][j]);   
        printf ("\n");
    }

    /* esito */
    fp = fopen ("rubricaOrdinata.txt", "w");
    for (i = 0; i < index; i++)
    {
        for (j = 0; mat[i][j] != '\0'; j++)
            fprintf (fp, "%c", mat[i][j]);   
        fprintf (fp, "\n");
    }

    printf ("\n");
    return 0;
}
// Marco Fiorillo 9/10/2021
