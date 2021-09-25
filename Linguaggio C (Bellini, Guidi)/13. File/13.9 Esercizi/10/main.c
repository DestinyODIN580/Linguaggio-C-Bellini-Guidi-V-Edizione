/* 136.
    Scrivere una procedura che visualizzi tutti i dati delle persone del file rubrica i cui nomi iniziano con una lettera
    richiesta all’utente. Aggiungere al menu del programma dell’Esercizio 6 l’opzione che richiama tale procedura.
*/

void letterSearch (int *lastIndex, char mat[][LEN])
{
    char letter;        /* lettera iniziale da cercare */
    char fileName[LEN]; /* stringa corrispondente */

    int out;            /* flag */
    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = 0;

    
    /* assegnamento di letter */
    printf ("Inserire la lettera > ");
    letter = getchar ();
    getchar ();

    /* scan fino alla lettera corrispondente */
    for (out = i = 0; i <= *lastIndex && !out && mat[i][0] > letter; i++)
        while (mat[i][0] == letter && i <= *lastIndex)
        {
            /* copia della stringa */
            out = 1;
            for (j = 0; mat[i][j] != '\0'; j++)
                fileName[j] = mat[i][j];
            fileName[j] = '\0';

            /* esito */
            printf ("%d >> %s\n", i++, fileName);
        }
}
// Marco Fiorillo 25/09/2021
