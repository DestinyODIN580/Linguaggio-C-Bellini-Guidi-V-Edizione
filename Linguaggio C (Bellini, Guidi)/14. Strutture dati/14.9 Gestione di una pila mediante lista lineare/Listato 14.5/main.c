/* Listato 14.5 Gestione di una pila implementata mediante una lista */

/* GESTIONE DI UNA PILA
    Operazioni di inserimento, eliminazione e
    visualizzazione. Utilizza una lista lineare
    per implementare la pila */

#include <stdio.h>
#include <malloc.h>

struct elemento
{
    int inf;
    struct elemento *pun;
};

void gestione_pila (void);
void visualizzazione_pila (struct elemento *);

int pila_vuota (struct elemento *);

struct elemento *inserimento (struct elemento *, int ele);

struct elemento *eliminazione (struct elemento *, int *);

int main (int argc, char const *argv[])
{
    gestione_pila();
}

void gestione_pila(void)
{
    struct elemento *punt_testa = NULL;

    int scelta = -1, ele;

    char pausa;

    while (scelta != 0) 
    {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf ("\t\tESEMPIO UTILIZZO STRUTTURA ASTRATTA: PILA");
        printf ("\n\n\n\t\t\t 1. Per inserire un elemento");
        printf ("\n\n\t\t\t 2. Per eliminare un elemento");
        printf ("\n\n\t\t\t 3. Per visualizzare la pila");
        printf ("\n\n\t\t\t 0. Per finire");
        printf ("\n\n\n\t\t\t\t Scegliere una opzione: ");
        scanf ("%d", &scelta);
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        switch (scelta)
        {
            case 1:
                printf ("Inserire un elemento: ");
                scanf ("%d", &ele);
                punt_testa = inserimento (punt_testa, ele);
                if (punt_testa == NULL)
                {
                    printf ("Inserimento impossibile: ");
                    printf ("memoria disponibile terminata");
                    printf ("\n\n Qualsiasi tasto per continuare...");
                    scanf ("%c%c", &pausa, &pausa);
                }
                break;

            case 2:
                if (pila_vuota (punt_testa))
                {
                    printf ("Eliminazione impossibile: pila vuota");
                    printf ("\n\n Qualsiasi tasto per continuare...");
                    scanf ("%c%c", &pausa, &pausa);
                }
                else
                {
                    punt_testa = eliminazione (punt_testa, &ele);
                    printf ("Eliminato: %d", ele );
                    printf ("\n\n Qualsiasi tasto per continuare...");
                    scanf ("%c%c", &pausa, &pausa);
                }
                break;

            case 3:
                visualizzazione_pila (punt_testa);
                printf ("\n\n Qualsiasi tasto per continuare...");
                scanf ("%c%c", &pausa, &pausa);
                break;
        }
    }
}
void visualizzazione_pila (struct elemento *p)
{
    struct elemento *paus = p;


    printf ("\n<------ Testa della pila ");

    while (paus != NULL)
    {
        printf("\n%d", paus->inf);
        paus = paus->pun;
    }
}
struct elemento *inserimento (struct elemento *p, int ele)
{
    struct elemento *paus;


    paus = (struct elemento *) malloc (sizeof (struct elemento));

    if (paus == NULL)
        return (NULL);

    paus->pun = p;
    p = paus;
    p->inf = ele;

    return(p);
}

struct elemento *eliminazione (struct elemento *p, int *ele)
{
    struct elemento *paus;


    *ele = p->inf;
    paus = p;
    p = p->pun;

    free (paus);
    return (p);
}
int pila_vuota (struct elemento *p)
{
    if (p == NULL)
        return(1);
    else
        return(0);
}
// Marco Fiorillo 15/10/2021
