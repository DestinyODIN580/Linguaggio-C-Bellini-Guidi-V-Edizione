/* 12.3 - Puntatori di funzione per la creazione di un menu */

#include <stdio.h>

void dummy (void);
void fun1 (void);
void fun2 (void);
void fun3 (void);

struct voce_menu
{
    void (*fun) (void); /* funzione da innescare */
    
    char *msg;          /* prompt di voce di menu */
};

/* inizializza in vettore di strutture menu
    assegnando il messaggio della voce di menu e
    la relativa funzione */

struct voce_menu menu[] = {
    "1. Funzione fun1\n", fun1,
    "2. Funzione fun2\n", fun2,
    "3. Funzione fun3\n", fun3,
    "0. Fine\n", NULL, NULL , NULL
};

int main (int argc, char const *argv[])
{
    int scelta;
    int loop;

    struct voce_menu *p;

    loop = 0;


    while (!loop)
    {
        for (p = menu; p->msg != NULL; p++)   /* presentazione del menu */
            printf ("%s", p->msg);

        printf ("Scegliere l'opzione desiderata > ");
        scanf ("%d", &scelta);

        if (!scelta)
            /* uscita dal programma */
            loop = -1;
        else
            /* esecuzione della funzione associata alla scelta */
            (*menu[scelta - 1].fun) ();
    }


    printf ("\n");
    return 0;
}

void fun1 (void)
{
    printf ("\n\nSto eseguendo fun1\n\n\n");
}

void fun2 (void)
{
    printf ("\n\nSto eseguendo fun2\n\n\n");
}

void fun3 (void)
{
    printf ("\n\nSto eseguendo fun3\n\n\n");
}
// Marco Fiorillo 31/07/2021
