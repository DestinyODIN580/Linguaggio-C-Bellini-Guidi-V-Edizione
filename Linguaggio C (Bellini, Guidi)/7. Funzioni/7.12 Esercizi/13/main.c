/* 89.
    Scrivere una funzione che visualizzi la scritta:

        Premere un tasto per continuare

    e interrompa quindi l’esecuzione del programma chiamante finché non viene premuto un tasto.
*/

#include <stdio.h>

void end (void);

int main (int argc, char const *argv[])
{

    /* esito */
    end ();
    printf ("Il pulsante e'stato premuto");


    printf ("\n");
    return 0;
}

void end ()
{

    printf ("Premere un tasto per continuare ");
    getchar ();

    return ;
}
// Marco Fiorillo 24/07/2021
