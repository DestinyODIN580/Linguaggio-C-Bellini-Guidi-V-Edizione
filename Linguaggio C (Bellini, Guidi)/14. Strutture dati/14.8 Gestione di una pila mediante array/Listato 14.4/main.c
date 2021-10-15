/* Listato 14.4 - Gestione di una pila implementata mediante un array */

/* GESTIONE DI UNA PILA
    Operazioni di inserimento, eliminazione e
    visualizzazione. Utilizza un array di strutture
    per implementare la pila */

#include <stdio.h>
#include <malloc.h>

#define LUN_PILA 10

void gestione_pila (void);
void visualizzazione_pila (int *, int);

inserimento (int *, int *, int);
eliminazione (int *, int *, int *);
pila_vuota (int);

main()
{
    gestione_pila();
}

void gestione_pila (void)
{
    int pila[LUN_PILA];
    int punt_testa = 0;
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
                if (punt_testa >= LUN_PILA)
                {
                    printf ("Inserimento impossibile: ");
                    printf ("memoria disponibile terminata");
                    printf ("\n\n Qualsiasi tasto per continuare...");
                    scanf ("%c%c", &pausa, &pausa);
                }
                else
                {
                    printf ("Inserire un elemento: ");
                    scanf ("%d", &ele);
                    punt_testa = inserimento (pila, &punt_testa, ele);
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
                    punt_testa = eliminazione (pila, &punt_testa, &ele);
                    printf ("Eliminato: %d", ele);
                    printf ("\n\n Qualsiasi tasto per continuare...");
                    scanf ("%c%c", &pausa, &pausa);
                }
                break;

            case 3:
                visualizzazione_pila (pila, punt_testa);
                printf ("\n\n Qualsiasi tasto per continuare...");
                scanf ("%c%c", &pausa, &pausa);
                break;
        }
    }
}

void visualizzazione_pila (int *pila, int p)
{
    printf ("\n<------ Testa della pila ");

    while (p >= 1)
        printf ("\n%d", pila[--p]);
}

inserimento (int *pila, int *p, int ele)
{
    pila[*p] = ele;
    ++*p;
    return(*p);
}

eliminazione (int *pila, int *p, int *ele)
{
    --*p;
    *ele = pila[*p];
    return(*p);
}
int pila_vuota (int p)
{
    if (p == 0)
        return(1);
    else
        return(0);
}
// Marco Fiorillo 15/10/2021
