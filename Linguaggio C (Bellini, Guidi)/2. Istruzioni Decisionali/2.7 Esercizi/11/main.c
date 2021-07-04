/* 19.
    Scrivere un programma che, richiesto il numero MM rappresentante il valore numerico di un mese, visualizzi, se 1
    ≤ MM ≤ 12, il nome del mese per esteso, altrimenti la frase “Valore numerico non valido”.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int MM;


    /* assegnazione di MM */
    printf ("Inserire MM > ");
    scanf ("%d", &MM);

    /* esito */
    switch (MM)
    {
        case (1):
            printf ("\nGennaio");
            break;

        case (2):
            printf ("\nFebbraio");
            break;
        
        case (3):
            printf ("\nMarzo");
            break;

        case (4):
            printf ("\nAprile");
            break;

        case (5):
            printf ("\nMaggio");
            break;

        case (6):
            printf ("\nGiugno");
            break;

        case (7):
            printf ("\nLuglio");
            break;

        case (8):
            printf ("\nAgosto");
            break;

        case (9):
            printf ("\nSettembre");
            break;

        case (10):
            printf ("\nOttobre");
            break;

        case (11):
            printf ("\nNovembre");
            break;

        case (12):
            printf ("\nDicembre");
            break;

        default:
            printf ("\nValore numerico non valido");
            break;
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
