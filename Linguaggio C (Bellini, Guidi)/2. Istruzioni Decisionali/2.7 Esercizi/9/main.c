/* 17.
    Scrivere un programma che visualizzi il seguente menu:

        MENU DI PROVA

    a) Per immettere dati
    b) Per determinare il maggiore
    c) Per determinare il minore 
    d) Per ordinare
    e) Per visualizzare

    Scelta: _

    quindi attenda l’immissione di un carattere da parte dell’utente e visualizzi una scritta corrispondente alla scelta
    effettuata, del tipo: “In esecuzione l'opzione a”. Se la scelta non è tra quelle proposte (a, b, c, d, e) deve
    essere visualizzata la scritta: “Opzione inesistente”. Si utilizzi il costrutto switch-case e la funzione
    getchar.
*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    char choise;        /* scelta dell'utente */
    char option;        /* lettera dell'opzione */
    
    option = 'a';


    /* stampa del menu' */
    printf ("\tMENU DI PROVA\n");
    printf ("%c) Per immettere dati\n", option++);
    printf ("%c) Per determinare il maggiore\n", option++);
    printf ("%c) Per determinare il minore\n", option++);
    printf ("%c) Per ordinare\n", option++);
    printf ("%c) Per visualizzare\n", option++);
    
    /* assegnazione di choise */
    printf ("Scelta: ");
    choise = getchar ();

    /* esito */
    switch (choise)
    {
        case ('a'):
            printf ("\nIn esecuzione l'opzione %c", choise);
            break;

        case ('b'):
            printf ("\nIn esecuzione l'opzione %c", choise);
            break;

        case ('c'):
            printf ("\nIn esecuzione l'opzione %c", choise);
            break;

        case ('d'):
            printf ("\nIn esecuzione l'opzione %c", choise);
            break;

        case ('e'):
            printf ("\nIn esecuzione l'opzione %c", choise);
            break;

        default:
            printf ("\nOpzione inesistente");
            break;
    }

    
    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
