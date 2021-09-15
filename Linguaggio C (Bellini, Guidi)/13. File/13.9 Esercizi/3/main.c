/* 129.
    Scrivere un programma che offra tramite menu le funzioni di inserimento, ricerca
    e cancellazione di un archivio studenti.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

void newPerson (void);      /* scrive una nuova persona su file */
void searchPerson (void);   /* trova una persona sui file */
void deletePerson (void);   /* cancella una persona su file */

struct struct_person        /* oggetto di una persona */
{
    char name[LEN];
    char surname[LEN];
    char birth_date[LEN];

} person;

struct file                 /* oggetto della persona su file */
{
    char s_name[LEN];
    char s_surname[LEN];
    char s_birthDate[LEN];
} file[LEN];

FILE *fp;                   /* puntatore al file anag.dat */

int main (int argc, char const *argv[])
{
    int choise;             /* scelta */

    choise = 1;


    /* display del menu e scelta dell'utente */
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
    int c;      /* carattere in ingresso */
    int i;      /* contatore */

    i = 0;

    fp = fopen ("anag.txt", "a+");


    getchar ();

    /* costruzione dello struct person.name */
    printf ("Inserire il nome > ");
    while ((c = getchar ()) != '\n')
        person.name[i++] = c;
    person.name[i] = '\0';

    /* costruzione dello struct person.surname */
    printf ("Inserire il cognome > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        person.surname[i++] = c;
    person.surname[i] = '\0';

    /* costruzione dello struct person.birthdate */
    printf ("Inserire la data di nascita > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        person.birth_date[i++] = c;
    person.birth_date[i] = '\0';

    /* esito */
    fprintf (fp, "%s %s %s\n", person.name, person.surname, person.birth_date);
    fflush (fp);
    fclose (fp);


    return ;
}

void searchPerson ()
{   
    char name[LEN];             /* nome da cercare */
    char fname[LEN];            /* nome corrente del file */
    char surname[LEN];          /* cognome da cercare */
    char fsurname[LEN];         /* cognome corrente del file */
    char fbirth_date[LEN];      /* data di nascita del file */

    int out;
    int c;
    int i;

    out = i = 0;

    fp = fopen ("anag.txt", "a+");
    
    
    getchar ();

    /* costruzione di name */
    printf ("Inserire nome > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';


    /* costruzione di surname */
    printf ("Inserire cognome > ");
    i = 0;  
    while ((c = getchar ()) != '\n')
        surname[i++] = c;
    surname[i] = '\0';

    /* esito */
    for (rewind (fp), i = 0; !feof (fp); i++)
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

    fclose (fp);


    return ;
}

void deletePerson ()
{
    char name[LEN];             /* nome da cancellare */
    char file_name[LEN];        /* nome del file */
    char file_surname[LEN];     /* cognome da cancellare */
    char surname[LEN];          /* cognome del file */
    char file_birthDate[LEN];   /* data di nascita del file */
    
    int c;                      /* carattere in entrata */
    int i, j;                   /* contatori */

    i = 0;

    fp = fopen ("anag.txt", "a+");


    getchar ();

    /* costruzione di name */
    printf ("Inserire il nome > ");
    while ((c = getchar ()) != '\n')
        name[i++] = c;
    name[i] = '\0';

    /* costruzione di surname */
    printf ("Inserire il cognome > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        surname[i++] = c;
    surname[i] = '\0';

    /* esito */
    rewind (fp);
    for (i = 0; !feof (fp); i++)
    {
        fscanf (fp, "%s %s %s\n", file_name, file_surname, file_birthDate);

        if (!strcmp (file_name, name) && !strcmp (file_surname, surname))
            printf ("\n\n>> Studente trovato a riga; %d\n", i);
        else
        {
            printf ("\nCopiato studente [%d]:\n", i);
            strcpy (file[i].s_name, file_name);
            printf ("1. nome >> %s\n", file[i].s_name);
            strcpy (file[i].s_surname, file_surname);
            printf ("2. cognome >> %s\n", file[i].s_surname);
            strcpy (file[i].s_birthDate, file_birthDate);
            printf ("3. data di nascita >> %s\n", file[i].s_birthDate);
        }
    }
    fclose (fp);
    fp = fopen ("anag.txt", "w+");
    for (j = 0; j < i; j++)
        fprintf (fp, "%s %s %s\n", file[j].s_name, file[j].s_surname, file[j].s_birthDate);
    fclose (fp);


    return ;
}
// Marco Fiorillo 15/09/2021