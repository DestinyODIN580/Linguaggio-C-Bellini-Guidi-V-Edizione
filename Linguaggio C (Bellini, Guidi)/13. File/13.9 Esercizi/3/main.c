/* 129.
    Scrivere un programma che offra tramite menu le funzioni di inserimento, ricerca
    e cancellazione di un archivio studenti.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

void newPerson (void); 
void searchPerson (void);
void deletePerson (void);

struct struct_person
{
    char name[LEN];
    char surname[LEN];
    char birth_date[LEN];

} person;

FILE *fp;

int main (int argc, char const *argv[])
{
    int choise;

    choise = 1;


    while (choise - '0')
    {
        printf ("\t\tMENU\n\n");
        printf ("0. Uscita dal programma\n");
        printf ("1. Inserimento studente\n");
        printf ("2. Ricerca studente\n");
        printf ("3. Eliminazione studente\n");
        printf ("\n> ");

        switch (choise = getchar ())
        {
            case '0':
                printf ("Programma terminato\n");
                break;

            case '1':
                printf ("Inserimento studente...\n");
                newPerson ();
                break;
            
            case '2':
                printf ("Ricerca studente...\n");
                searchPerson ();
                break;

            case '3':
                printf ("Cancellazione studente...\n");
                deletePerson ();
                break;
            
            default:
                break;
        }   
    
    }     


    printf ("\n");
    return 0;
}

void newPerson ()
{
    int c;
    int i;

    i = 0;

    fp = fopen ("anag.txt", "a+");


    getchar ();
    printf ("Inserire il nome > ");
    while ((c = getchar ()) != '\n')
        person.name[i++] = c;
    person.name[i] = '\0';

    printf ("Inserire il cognome > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        person.surname[i++] = c;
    person.surname[i] = '\0';

    printf ("Inserire la data di nascita > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        person.birth_date[i++] = c;
    person.birth_date[i] = '\0';

    fprintf (fp, "%s %s %s\n", person.name, person.surname, person.birth_date);
    fflush (fp);
    fclose (fp);


    return ;
}

void searchPerson ()
{   
    char name[LEN];
    char fname[LEN];
    char surname[LEN];
    char fsurname[LEN];
    char birth_date[LEN];
    char fbirth_date[LEN];

    int out;
    int c;
    int i;

    out = i = 0;

    fp = fopen ("anag.txt", "a+");
    
    
    getchar ();
    printf ("Inserire nome > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';


    printf ("Inserire cognome > ");
    i = 0;  
    while ((c = getchar ()) != '\n')
        surname[i++] = c;
    surname[i] = '\0';

    rewind (fp);

    
    for (i = 0; !feof (fp); i++)
    {
        fscanf (fp, "%s %s %s\n", fname, fsurname, fbirth_date);

        if (!strcmp (fname, name))
            if (!strcmp (fsurname, surname))
            {
                printf ("Studente trovato alla riga %d\n", i);
                out = 1;
                break;
            }
    }

    if (!out)
        printf ("Studente non trovato\n");

    return ;
}

void deletePerson ()
{
    
}
//