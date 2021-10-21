/* 174.
    Scrivere un CGI che accetti in ingresso la data di nascita e calcoli il
    numero di anni e giorni trascorsi da quella data a oggi.
*/

#include <stdio.h>
#include <time.h>

int main (int argc, char const *argv[])
{
    int daysPassed; /* giorni passati dalla nascita */
    int day;        /* giorno */
    int month;      /* mese */
    int year;       /* anno */
    int i;          /* contatore */

    struct tm *ptm; /* setup di tm */

    time_t timer;   /* tempo */


    /* acquisizione tempo */
    time (&timer);
    ptm = localtime (&timer);
    
    /* inserimento */
    printf ("Inserire la data nel formato GG/MM/AA > ");
    scanf ("%d/%d/%d", &day, &month, &year);

    /* calcolo giorni */
    for (daysPassed = 0, i = year; i < (ptm->tm_year + 1900 - 1); i++)
        (!(year % 4) && year % 400) ? (daysPassed += 365) : (daysPassed += 366);
    for (i = 1; i <= ptm->tm_mon; i++)
    {
        if (i == 11 || i == 10 || i == 4 || i == 6)
            daysPassed +=  30;    
        else if (i == 2 && (!(year % 4) && year % 100))
            daysPassed += 29;
        else if (i == 2)
            daysPassed += 28;
        else
            daysPassed += 31;
    }   
    daysPassed += ptm->tm_mday;

    /* calcolo anno */
    year = (ptm->tm_year + 1900) - year;
    if (month > ptm->tm_mon)
        if (day > ptm->tm_mday)
            year--; 

    /* esito */
    printf ("Anni   passati >> %d;\n", year);
    printf ("Giorni passati >> %d;\n", daysPassed);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 21/10/2021
