/* 14.2 - Programma che crea, visualizza la lista e ne determina il maggiore.
    L’immissione dei valori da parte dell’utente termina con zero */

/* Accetta in ingresso una sequenza di interi e limemorizza in una lista. La sequenza termina quando
    viene immesso il valore zero. La lista creata viene
    visualizzata. Determina il maggiore della lista */

#include <stdio.h>
#include <malloc.h>
#include <limits.h>

struct elemento
{
    int inf;
    struct elemento *pun;
};

struct elemento *crea_lista2();

void visualizza_lista(struct elemento *);

int maggiore_lista(struct elemento *);

int main (int argc, const char *argv[])
{
    struct elemento *punt_lista;    /* Puntatore alla testa della lista */


    punt_lista = crea_lista2();    /* Chiamata funzione per creare la lista */

    visualizza_lista(punt_lista); /* Chiamata funzione per visualizzare la lista */

    /* Stampa il valore di ritorno della funzione maggiore_lista() */
    printf("\nIl maggiore e': %d\n\n", maggiore_lista(punt_lista));
}

/* Accetta in ingresso una sequenza di interi e li
memorizza in una lista. Il numero di interi che compongono
la sequenza termina con il valore zero
*/
struct elemento *crea_lista2()
{
    struct elemento *p, *paus;
    struct elemento x;


    printf("\nInserisci un'informazione (0 per fine lista): ");
    scanf("%d", &x.inf);

    if (!x.inf)
        p = NULL;   /* Lista vuota */
    else 
    {
        /* Creazione del primo elemento */
        p = (struct elemento *) malloc (sizeof (struct elemento));
        p->inf = x.inf;
        paus=p;

        while (!x.inf)
        {
            printf("\nInserisci un'informazione (0 per fine lista): ");
            scanf("%d", &x.inf);

            if(x.inf)
            {

            /* creazione dell'elemento successivo */
            paus->pun = (struct elemento *) malloc (sizeof(struct elemento));
            paus = paus->pun;   /* Attualizzazione di paus */
            paus->inf = x.inf;  /* Inserimento dell'informazione
                                nell'elemento */
            }
            else
                paus->pun = NULL;   /* Marca di fine lista */
        }
    }
    return(p);
}

/* Determina il maggiore della lista.
Il parametro in ingresso è il puntatore alla testa */
int maggiore_lista(struct elemento *p)
{
    int max = INT_MIN;


    /* Ciclo di scansione della lista */
    while(p != NULL)
    {
        if (p->inf > max)
            max = p->inf;
        p = p->pun;
        /* Scorre di un elemento in avanti */
    }
    
    return(max);
}

/* Visualizza la lista */
void visualizza_lista(struct elemento *p)
{
    printf("\npunt_lista---> ");
    /* Ciclo di scansione della lista */

    while (p!=NULL)
    {
        printf("%d", p->inf);
        /* Visualizza il campo informazione */
        printf("---> ");
        p = p->pun;
        /* Scorre di un elemento in avanti */
    }
    printf("NULL\n\n");
}
// Marco Fiorillo 13/10/2021
