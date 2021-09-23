/* 134.
    Scrivere una funzione che permetta l’ordinamento del file rubrica rispetto al nome.
    Aggiungere al menu del programma dell’Esercizio 6 l’opzione che richiama tale
    procedura. 
*/

void sort (int *lastIndex, char mat[][LEN])
{
    char name1[LEN];        /* nome e riga 1 */
    char name2[LEN];        /* nome e riga 2 */
         
    int i, j, k;            /* contatori */


    /* processo per il sorting */
    for (i = 0; i < *lastIndex; i++)
        for (j = 0; j < *lastIndex; j++)
        {
            for (k = 0; mat[j][k] != ' '; k++)
                name1[k] = mat[j][k];
            name1[k] = '\0';

            for (k = 0; mat[j + 1][k] != ' '; k++)
                name2[k] = mat[j + 1][k];
            name2[k] = '\0';

            /* esito */
            if (strcmp (name1, name2) > 0)
            {
                for (k = 0; mat[j][k] != '\0'; k++)
                    name1[k] = mat[j][k];
                name1[k] = '\0';

                for (k = 0; mat[j + 1][k] != '\0'; k++)
                    name2[k] = mat[j + 1][k];
                name2[k] = '\0';

                for (k = 0; k < strlen (name1); k++)
                    mat[j + 1][k] = name1[k];
                mat[j + 1][k] = '\0';

                for (k = 0; k < strlen (name2); k++)
                    mat[j][k] = name2[k];
                mat[j][k] = '\0';
            }
        }
}
// Marco Fiorillo 23/09/2021
