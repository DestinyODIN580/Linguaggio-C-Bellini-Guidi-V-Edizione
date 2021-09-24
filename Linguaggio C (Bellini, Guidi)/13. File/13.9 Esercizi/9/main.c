/* 135.
    Scrivere una funzione che permetta, una volta che il file
    rubrica è ordinato per nome, di effettuare una ricerca binaria.
    Aggiungere al menu del programma dell’Esercizio 6 l’opzione che richiama tale procedura.
*/

void binary (int *lastIndex, char mat[][LEN])
{
    char name[LEN];         /* nome da trovare */
    char fileName[LEN];     /* nome corrente nella rubrica */

    int result;             /* risultato della funzioen strcmp */
    int pos;                /* riga della rubrica con il nome cercato */
    int bottom;             /* var. per la ricerca binaria */
    int top;                /* var. per la ricerca binaria */
    int c;                  /* carattere in ingresso */
    int i, j;               /* contatori */

    pos = -1;
    i = 0;


    /* costruzione di name */
    printf ("Inserire il nome da cercare > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';

    /* ricerca binaria */
    for (bottom = 0, top = *lastIndex; bottom <= top && pos == -1; )
    {
        /* spartizione */
        i = (bottom + top) / 2;

        /* costruzione di filename */
        for (j = 0; mat[i][j] != ' '; j++)
            fileName[j] = mat[i][j];
        fileName[j] = '\0';

        /* controllo della validita'del nome */
        if (!(result = strcmp (name, fileName)))
            pos = i;
        else if (result > 0)
            bottom = i + 1;
        else
            top = i - 1;  
    }  

    /* esito */
    if (pos == -1)
        printf ("Elemento non trovato\n");
    else
        printf ("Nome trovato a riga [%d]\n", pos);


    return ;
}
// Marco Fiorillo 25/09/2021
