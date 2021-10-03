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

void new (void);

int biggestSov (void);
void biggestSoc (void);
int itoa (char [], int);

FILE *fp;

int main (int argc, char const *argv[])
{
    int c;


    while (!c)
    {
        printf ("MENU\n");
        printf ("0. Uscire\n");
        printf ("1. Nuova sovvenzione\n");
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
    char buffer[LEN];

    int c;
    int i;

    i = 0;

    fp = fopen ("sovvenzioni.txt", "a+");

    time_t currentTime;
    time (&currentTime);

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

    fprintf (fp, "Socio >> %s\n", buffer);

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
    char buffer[LEN];
    int current;
    int max;

    max = -1;

    fp = fopen ("sovvenzioni.txt", "r");

    rewind (fp);
    while (!feof (fp))
    {
        fscanf (fp, "Sede >> %s\nSocio >> %s\nImporto >> %d\nData >> %s %s  %s %s %s\n\n", buffer, buffer, &current, buffer, buffer, buffer, buffer, buffer);

        if (current > max)
            max = current;
    }

    fclose (fp);

    return max;
}

void biggestSoc ()
{
    char mat[LEN][10];
    char buffer[LEN];
    char sed[LEN];

    int lastIndex;
    int in;
    int aux;
    int len;
    int out;
    char current[LEN];
    int max;
    int i, j, k;

    max = -1;
    lastIndex = out = in = 0;


    fp = fopen ("sovvenzioni.txt", "r");

    rewind (fp);
    while (!feof (fp))
    {
        fscanf (fp, "Sede >> %s\nSocio >> %s\nImporto >> %s\nData >> %s %s  %s %s %s\n\n", sed, buffer, current, buffer, buffer, buffer, buffer, buffer);

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

//
