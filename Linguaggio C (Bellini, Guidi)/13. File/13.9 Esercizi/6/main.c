/* 132.
    Scrivere un programma che permetta di gestire una rubrica telefonica
    in modo che i dati vengano  memorizzati  in forma permanente sul file
    rubrica. Offrire all’utente un menu con le opzioni: inserimento, modifica,
    cancellazione e visualizzazione dell’intera rubrica.
*/

#include <stdio.h>

#define LEN 100

void new (void);
void modify (void);
void delete (void);
void show (void);

int main (int argc, char const *argv[])
{
    int choise;
    int out;


    FILE *fp;

    out = 0;

    fp = fopen ("rubrica.txt", "a+");


    while (!out)
    {
        printf ("\tMENU\n\n");
        printf ("0) Esci\n");
        printf ("1) Nuovo contatto\n");
        printf ("2) Modifica contatto\n");
        printf ("3) Cancella contatto\n");
        printf ("4) Visualizzazione rubrica\n\n");
        printf ("> ");
        scanf ("%d", &choise);

        switch (choise)
        {
            case '0':
                printf ("Chiusura del programma...");
                out = 1;
                break;

            case '1':
                printf ("Creazione nuovo contatto...");
                new ();
                break;

            case '2':
                printf ("Modifica contatto...");
                modify ();
                break;
            
            case '3':
                printf ("Cancellazione contatto...");
                delete ();
                break;

            case '4':
                printf ("Visualizzazione della rubrica...");
                show ();
                break;

            default:
                break;
        }
    }

    fclose (fp);


    printf ("\n");
    return 0;
}

void new ()
{

}

void modify ()
{

}

void delete ()
{

}

void show ()
{

}
//
