/* 83.
    Progettare e realizzare una funzione che accetti in ingresso una data e restituisca in uscita il corrispondente giorno
    della settimana. La funzione deve effettuare anche i controlli di validità della data immessa.  

#include <stdio.h>
#include <stdlib.h>

#define JAN 0
#define FEB 3
#define MAR 3
#define APR 6
#define MAY 1
#define JUN 4
#define JUL 6
#define AUG 2
#define SEP 5
#define OCT 0
#define NOV 3
#define DEC 5

#define CEN1 0
#define CEN2 5
#define CEN3 3
#define CEN4 1


int main(int argc, char const *argv[])
{
    char AA[4];
    char year[2];
    char year2[2];

    int AAlen;
    int aaTwoDigits;
    int aaTwoDigits1;
    int aaTwoDigits2;
    int aa;
    int aa2;
    int GG;
    int MM;
    int out;
    int c;
    int i;

    out = i = 0;


    printf ("Inserire l'anno > ");
    while ((c = getchar ()) != '\n')
        AA[i++] = c;
    AA[i] = '\0';

    year2[0] = AA[0];
    year2[1] = AA[0];
    year2[2] = '\0';

    printf ("Inserire il mese > ");
    scanf ("%d", &MM);

    printf ("Inserire il giorno > ");
    scanf ("%d", &GG);
printf ("%s\n\n", AA);
    aa = atoi (AA);
printf ("%s\n\n", AA);
    /* valutazione se la data e' valida o meno 
    if (GG > 31 || GG < 1)
        out = 1;

    else if (GG > 30 && (MM == 4 || MM == 6 || MM == 9 || MM == 11))
        out = 1;

    else if (GG > 29 && MM == 2 && (aa % 4 == 0) && (aa % 100 != 0))
        out = 1;
        
    else if (GG > 28 && MM == 2)
        out = 1;

    if (!out)
    {
        switch (MM)
        {
            case (1):
                GG += JAN;
                break;

            case (2):
                GG += FEB;
                break;

            case (3):
                GG += MAR;
                break;

            case (4):
                GG += APR;
                break;

            case (5):
                GG += MAY;
                break;
            
            case (6):
                GG += JUN;
                break;
            
            case (7):
                GG += JUL;
                break;

            case (8):
                GG += AUG;
                break;

            case (9):
                GG += SEP;
                break;

            case (10):
                GG += OCT;
                break;

            case (11):
                GG += NOV;
                break;
            
            case (12):
                GG += DEC;
                break;

            default:
                break;
        }

        if (GG > 7)
            GG = GG % 7;

        year[0] = AA[2];
        year[1] = AA[3];
        year[2] = '\0';

        printf ("%s\n\n", AA);

        printf (">> %s, %c %c : %s \n", year, AA[2], AA[3], AA);
        printf (">> %d\n", aaTwoDigits = atoi (year));

        if (aaTwoDigits >= 7)
            aaTwoDigits1 = aaTwoDigits % 7;

        if (aaTwoDigits >= 4)
            aaTwoDigits2 = aaTwoDigits / 4;
        else
            aaTwoDigits2 = 0;

        printf (">> %d\n", aaTwoDigits = aaTwoDigits1 + aaTwoDigits2);

        year[0] = AA[0];
        year[1] = AA[1];
        year[2] = '\0';

        printf (">> %s, %c %c\n", year, AA[0], AA[1]);
        printf ("2 >> %d\n" , aa2 = atoi (year));

        switch (aa2)
        {
            case (16):
                aaTwoDigits += CEN1;
                break;

            case (17):
                aaTwoDigits += CEN2;
                break;

            case (19):
                aaTwoDigits += CEN3;
                break;

            case (20):
                aaTwoDigits += CEN4;
                break;

            case (21):
                aaTwoDigits += CEN1;
                break;

            default:
                break;
        }

        ((aa % 4 == 0) && (aa % 100 != 0) && (MM == 1 || MM == 2)) ? (aaTwoDigits -= 1) : (0);

    aaTwoDigits += GG;

    if (aaTwoDigits >= 7)
        aaTwoDigits = aaTwoDigits % 7;

    printf (">> %d", aaTwoDigits);

    }
        // printf ("La data e'valida, giorno della settimana");
    else
        printf ("La data non e'valida");






    printf ("\n");
    return 0;
}

*/

