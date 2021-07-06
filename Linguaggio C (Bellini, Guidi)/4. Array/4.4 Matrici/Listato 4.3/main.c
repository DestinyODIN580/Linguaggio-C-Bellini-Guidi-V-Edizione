/* 4.3 - Esempio di utilizzo di un array bidimensionale */

/* Caricamento di una matrice */

#include <stdio.h>

int mat[4][3];

int main (int argc, char const *argv[])
{
    int i, j;


    printf ("\n   \n   CARICAMENTO DELLA MATRICE   \n   \n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
        {
            printf ("Inserisci lines %d colonna %d val: ", i, j);
            scanf ("%d", &mat[i][j]);
        }

    /* Visualizzazione */
    for (i = 0; i < 4; i++)
    {
        printf ("\n");
        for (j = 0; j < 3; j++)
            printf ("%5d", mat[i][j]);
    }


    printf ("\n");
    return 0;
}
//

