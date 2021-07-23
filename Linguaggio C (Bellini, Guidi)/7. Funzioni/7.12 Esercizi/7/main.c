/* 83.
    Progettare e realizzare una funzione che accetti in ingresso una data e restituisca in uscita il corrispondente giorno
    della settimana. La funzione deve effettuare anche i controlli di validità della data immessa.
*/

// Formula >> N + int (N - 1) : 4 - int (N - 1) : 100 + int (N - 1) : 400 + t


#include <stdio.h>

#define SAT 0
#define SUN 1
#define MON 2
#define THU 3
#define WED 4
#define THR 5
#define FRI 6

int dayOfTheWeek (int, int, int);   /* funzione per il calcolo del giorno data la data */

int main (int argc, char const *argv[])
{
    int AA;                         /* anno */
    int MM;                         /* mese */
    int GG;                         /* giorno */
    int day;                        /* nome giorno della data */

    
    /* assegnazione AA */
    printf ("Anno > ");
    scanf ("%d", &AA);

    /* assegnazione MM */
    printf ("Mese > ");
    scanf ("%d", &MM);

    /* assegnazione GG */
    printf ("Giorno > ");
    scanf ("%d", &GG);

    /* esito */
    if (GG > 31 || GG < 1)
        printf ("Data non valida");
    else if (GG > 30 && (MM == 4 || MM == 6 || MM == 9 || MM == 11))
        printf ("Data non valida");
    else if (GG > 29 && MM == 2 && (AA % 4 == 0) && (AA % 100 != 0))
        printf ("Data non valida");
    else if (GG > 28 && MM == 2)
        printf ("Data non valida");
    else
    {
        printf ("Giorno della settimana >> ");
        switch (day = dayOfTheWeek (AA, MM, GG))
        {
            case (MON):
                printf ("lunedi';");
                break;

            case (THU):
                printf ("martedi';");
                break;

            case (WED):
                printf ("mercoledi';");
                break;

            case (THR):
                printf ("giovedi';");
                break;

            case (FRI):
                printf ("venerdi';");
                break;

            case (SAT):
                printf ("sabato;");
                break;

            case (SUN):
                printf ("domenica';");
                break;

            default:
                break;
        }

    }


    printf ("\n");
    return 0;
}

int dayOfTheWeek (int AA, int MM, int GG)
{
    int day;                        /* giorno della settimana */           
    int t;                          /* giorni passati dell'anno da 1/1/AA */
    int i;                          /* contatore */


    /* calcolo di t */
    for (t = 0, i = 1; i < MM; i++)
    {
        if (AA % 4 == 0 && AA % 100 != 0 && i == 2)
            t += 29;
        else if (i == 2)
            t += 28;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            t += 30;
        else
            t += 31;
    }
    t += GG;

    /* calcolo di day */
    day = (AA + ((AA - 1) / 4) - ((AA - 1) / 100) + ((AA - 1) / 400) + t) % 7;
    
    return day;
}
// Marco Fiorillo 23/07/2021
