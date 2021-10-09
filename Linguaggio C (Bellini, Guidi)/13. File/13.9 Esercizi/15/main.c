/* 141.
    Un’associazione culturale memorizza nel file sovvenzioni la sede che ha ottenuto la sovvenzione, il nome del
    socio che ha effettuato il versamento nonché la data e l’importo del versamento stesso. Scrivere un programma che crei
    un tale file e memorizzi i dati relativi ad alcune sovvenzioni e le funzioni che determinano: la sede che ha ottenuto la
    sovvenzione più grande, la sede che ha il totale complessivo dei finanziamenti più grande, il totale delle sovvenzioni
    ottenute nel dicembre 1997, se il 26.11.95 il socio Marco Taddei ha effettuato un versamento (e in caso positivo nevisualizzi tutti i dati), la
    lista di tutti i finanziamenti ottenuti dalla sede di Vercelli. Anche in questo caso, come
    nell’esercizio precedente, si cerchi successivamente una soluzione migliore per la memorizzazione delle informazioni e
    per la loro gestione.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LEN 100
#define YEAR 1997
#define MDAY 26
#define MMONTH 11
#define MYEAR 1995


void sov1995 (void);        /* sovvenzioni 1995 */
void vercelli (void);       /* importi Vercelli */
void new (void);            /* nuovo versamento */
void biggestSoc (void);     /* sede sovvenzione piu'grande */

int biggestSov (void);      /* sovvenzione piu'grande */
int itoa (char [], int);    /* devilisse.h */
int sov1997 (void);         /* marco taddei, 1995 */

FILE *fp;

int main (int argc, char const *argv[])
{
    int c;  /* carattere in ingresso */

    c = 0;


    /* scelta del menu */
    while (!c)
    {
        printf ("MENU\n");
        printf ("0. Uscire\n");
        printf ("1. Nuova sovvenzione\n");
        printf ("2. Sovvenzione piu' grande...\n");
        printf ("3. Sede sovvenzione piu' grande...\n");
        printf ("4. Totale sovvenzioni 1997...\n");
        printf ("5. Marco Taddei - 1995\n");
        printf ("6. Versamenti sede vercelli\n");
        printf ("> ");

        c = getchar ();
        getchar ();

        switch (c)
        {
            case '0':
                printf ("Chiusura del programma...\n");
                c = 0;
                exit (0);
                break;
            
            case '1':
                printf ("Nuova sovvenzione...\n");
                new ();
                c = 0;
                break;

            case '2':
                printf ("Sovvenzione piu' grande...\n");
                printf ("Massimo >> %d\n", biggestSov ());
                c = 0;
                break;

            case '3':
                printf ("Sovvenzione piu' grande...\n");
                biggestSoc ();
                c = 0;
                break;
                
            case '4':
                printf ("Sovvenzione 1997...\n");
                printf ("Numero di sovvenzioni del 1997 >> %d\n", sov1997 ());
                c = 0;
                break;

            case '5':
                printf ("Sovvenzione 1995...\n");
                sov1995 ();
                c = 0;
                break;

            case '6':
                printf ("Versamento Vercelli...\n");
                vercelli ();
                c = 0;
                break;

            default:
                printf ("Input errato...\n");
                break;

        }
    }


    printf ("\n");
    return 0;
}

void new ()
{
    char buffer[LEN];   /* buffer */

    int c;              /* carattere in ingresso */
    int i;              /* contatore */

    i = 0;

    fp = fopen ("sovvenzioni.txt", "a+");

    time_t currentTime;
    time (&currentTime);


    /* scrittura sul file dei dati */
    printf ("Inserire la sede >> ");
    while ((c = getchar ()) != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';

    fprintf (fp, "Sede >> %s\n", buffer);

    printf ("Inserire il nome del socio >> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';

    fprintf (fp, "Socio >> %s", buffer);

    printf ("Inserire il cognome del socio >> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';

    fprintf (fp, " %s\n", buffer);

    printf ("Totale importo >> ");
    i = 0;
    while ((c = getchar ()) != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';

    fprintf (fp, "Importo >> %s\n", buffer);

    fprintf (fp, "Data >> %s\n", ctime (&currentTime));



    fflush (fp);
    fclose (fp);


    return ;
}

int biggestSov ()
{
    char buffer[LEN];   /* buffer */
    int current;        /* sovvenzione corrente */
    int max;            /* sovvenzione massima */

    max = -1;

    fp = fopen ("sovvenzioni.txt", "r");


    /* ricerca di max */
    rewind (fp);
    while (!feof (fp))
    {
        fscanf (fp, "Sede >> %s\nSocio >> %s %s\nImporto >> %d\nData >> %s %s  %s %s %s\n\n", buffer, buffer, buffer, &current, buffer, buffer, buffer, buffer, buffer);

        if (current > max)
            max = current;
    }
    fclose (fp);


    return max;
}

void biggestSoc ()
{
    char mat[LEN][10];      /* matrice dei dati */
    char buffer[LEN];       /* buffer */
    char sed[LEN];          /* sede */
    char current[LEN];      /* riga corrent */

    int lastIndex;          /* ultimo indice */
    int in;                 /* flag */
    int aux;                /* variabile di supporto */
    int len;                /* lunghezza */
    int out;                /* flag */
    int max;                /* massimo */
    int i, j, k;            /* contatore */

    max = -1;
    lastIndex = out = in = 0;

    fp = fopen ("sovvenzioni.txt", "r");


    /* ricerca della sede */
    rewind (fp);
    while (!feof (fp))
    {
        fscanf (fp, "Sede >> %s\nSocio >> %s %s\nImporto >> %s\nData >> %s %s  %s %s %s\n\n", sed, buffer, buffer, current, buffer, buffer, buffer, buffer, buffer);

        for (out = i = 0; i < lastIndex; i++)
        {
            for (j = 0; mat[i][j] != '>'; j++)
                buffer[j] = mat[i][j];
            buffer[j - 1] = '\0';

            puts (buffer);

            if ((!strcmp (buffer, sed)) && !in)
            {
                printf ("Buffer da cercare >> %s [%d]\n\n", buffer, i);
                for (k = 0, len = j + 3; mat[i][len] != '\0'; k++, len++)
                    buffer[k] = mat[i][len];
                buffer[k] = '\0';

                puts (buffer);

                itoa (buffer, max = atoi (buffer) + atoi (current));

                for (j += 3, k = 0; k < strlen (buffer); j++, k++)
                    mat[i][j] = buffer[k];
                mat[i][j] = '\0';
                
                out = 1;
                in = 1;
            }
        }
        if (!out)
        {
            for (i = 0; i < strlen (sed); i++)
                mat[lastIndex][i] = sed[i];
            mat[lastIndex][i++] = ' ';
            mat[lastIndex][i++] = '>';
            mat[lastIndex][i++] = '>';
            mat[lastIndex][i++] = ' ';

            for (j = 0; j < strlen (current); j++)
                mat[lastIndex][i + j] = current[j];
            mat[lastIndex++][i + j] = '\0';

            printf ("--\n\n");
            for (i = 0; i < lastIndex; i++)
            {
                for (j = 0; j < mat[i][j] != '\0'; j++)
                {
                    printf ("%d >> ", j);
                    putc (mat[i][j], stdout);
                    printf ("\n");
                }
                    
                printf ("\n");
            }
            printf ("#--\n\n");
        }
    }

    /* esito della ricerca */
    printf (" // ----- //\n\n");
    for (i = 0; i < lastIndex; i++)
    {
        for (j = 0; j < mat[i][j] != '\0'; j++)
            printf ("%c", mat[i][j]);
        printf ("\n");
    }
    printf ("#--\n\n");

    return ;
}

int sov1997 ()
{
    char buffer[LEN];   /* buffer */

    int current;        /* anno corrente */
    int i;              /* contatore */

    i = 0;

    fp = fopen ("sovvenzioni.txt", "r");


    /* ricerca sovvenzioni 1997 */
    rewind (fp);
    while (!feof (fp))
    {
        fscanf (fp, "Sede >> %s\nSocio >> %s %s\nImporto >> %s\nData >> %s %s  %s %s %d\n\n", buffer, buffer, buffer, buffer, buffer, buffer, buffer, &current);

        if (current == YEAR)
            i++;
    }

    fclose (fp);
    return i;


}

void sov1995 ()
{
    char buffer[LEN];       /* buffer */
    char name[LEN];         /* nome */
    char strMonth[LEN];     /* cognome */
    char import[LEN];       /* importo */

    int out;                /* flag */
    int day;                /* giorno */
    int month;              /* mese */
    int year;               /* anno */

    out = 0;


    /* ricerca deversamenti nel 1995 di Marco Taddei */
    rewind (fp);
    while (!feof (fp))
    {
        fscanf (fp, "Sede >> %s\nSocio >> %s %s\nImporto >> %s\nData >> %s %s  %d %s %d\n\n", buffer, name, buffer, import, strMonth, &day, buffer, &year);

        if (!strcmp (strMonth, "JAN"))
            month = 1;
        else if (!strcmp (strMonth, "Jan"))
            month = 2;
        else if (!strcmp (strMonth, "Feb"))
            month = 3;
        else if (!strcmp (strMonth, "Mar"))
            month = 4;
        else if (!strcmp (strMonth, "Apr"))
            month = 5;
        else if (!strcmp (strMonth, "May"))
            month = 6;
        else if (!strcmp (strMonth, "Jun"))
            month = 7;
        else if (!strcmp (strMonth, "Jul"))
            month = 8;
        else if (!strcmp (strMonth, "Sep"))
            month = 9;
        else if (!strcmp (strMonth, "Oct"))
            month = 10;
        else if (!strcmp (strMonth, "Nov"))
            month = 11;
        else
            month = 12; 

        if (day == MDAY)
            if (month == MMONTH)
                if (year == MYEAR)
                {
                    out = 1;
                    printf ("Importo versato >> %s\n", import);
                }    
    }
    fclose (fp);

    if (!out)
            printf ("Nessun versamento\n");


    return ;
}

void vercelli ()
{
    char place[LEN];        /* sede */
    char name[LEN];         /* nome */
    char surname[LEN];      /* cognome */
    char import[LEN];       /* importo */
    char wDay[LEN];         /* giorno della settimana */
    char month[LEN];        /* mese */
    char hour[LEN];         /* ora */

    int day;                /* giorno */
    int year;               /* anno */


    /* ricerca della sede di Vercelli */
    while (!feof (fp))
    {
        fscanf (fp, "Sede >> %s\nSocio >> %s %s\nImporto >> %s\nData >> %s %s  %d %s %d\n\n", place, name, surname, import, wDay, month, &day, hour, &year);

        if (!strcmp (place, "Vercelli"))
            printf ("Sede >> %s\nSocio >> %s %s\nImporto >> %s\nData >> %s %s  %d %s %d\n\n", place, name, surname, import, wDay, month, day, hour, year);

    }

    return ;

}

/* devilisse.h */
int itoa (char s[], int n)
{
	int sign;
	int aux;
	int i, j, k;
	
	sign = i = 0;
	
	
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
		
	do
		s[i++] = n % 10 + '0';
	while (n /= 10);
		
	if (sign)
		s[i++] = '-';
	s[i] = '\0';
	
	for (j = 0, i--; j < i; j++, i--)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
	}
	
	return ++i + j;
}
// Marco Fiorillo 9/10/2021
