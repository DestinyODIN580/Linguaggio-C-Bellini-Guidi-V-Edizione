/* 133.
    Scrivere una funzione che, dato in ingresso il nome, cerchi in rubrica il
    corrispondente  numero  di  telefono. Aggiungere al menu del programma
    dell’Esercizio 6 l’opzione che richiama tale procedura.
*/

void search (int *lastIndex, char mat[][LEN])
{
    char name[LEN];     /* nome da cercare */

    int c;              /* carattere in ingresso */
    int i, j;           /* contatori */

    i = j = 0;


    /* costruzione di name */
    printf ("Inserire il nome di cui trovare il numero > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';

    /* ricerca di name e display del numero associato */
    for (i = 0; i <= *lastIndex; i++)
    {
        for (j = 0; mat[i][j] != ' '; j++)
            if (name[j] != mat[i][j])
                break;

        if (j == strlen (name))
        {
            for (; mat[i][j] < '0' || mat[i][j] > '9'; j++);

            printf ("\nNumero di %s >> ", name);
            for (j-- ; mat[i][j] != '\0'; j++)
                printf ("%c", mat[i][j]);

        }
    }
    printf ("\n\n");


    return ;
}
// Marco Fiorillo 22/09/2021
