/* 14.1 - Creazione e visualizzazione di una lista */

/* Accetta in ingresso una sequenza di interi e li memorizza in
una lista. Il numero di interi che compongono la sequenza
è richiesto all'utente. La lista creata viene visualizzata */

#include <stdio.h>
#include <malloc.h>

/* struttura degli elementi della lista */
struct elemento
{
    int inf;
    struct elemento *pun;
};

void visualizza_lista(struct elemento *);

struct elemento *crea_lista();

int main (int argc, const char *argv[])
{
    struct elemento *punt_lista;    /* Puntatore alla testa della lista */


    punt_lista = crea_lista();      /* Chiamata funzione per creare la lista */

    visualizza_lista(punt_lista);   /* Chiamata funzione per visualizzare la lista */


    printf ("\n");
    return 0;
}
    
/* Funzione per l'accettazione dei valori immessi
e la creazione della lista. Restituisce il puntatore alla testa */
struct elemento *crea_lista ()
{
    struct elemento *p, *paus;
    int i, n;
    
    
    printf("\n Di quanti elementi è composta la sequenza?");
    scanf("%d", &n);

    /* lista vuota */
    if(!n)
        p = NULL;
    else
    {
        /* Creazione del primo elemento */
        p = (struct elemento *) malloc (sizeof (struct elemento));

        printf("\nInserisci la 1 informazione: ");
        scanf("%d", &p->inf);

        paus = p;

        /* creazione degli elementi successivi */
        for (i = 2; i <= n; i++)
        {
            paus->pun = (struct elemento *)malloc(sizeof(struct elemento));
            paus = paus->pun;

            printf("\nInserisci la %d informazione: ", i);
            scanf("%d", &paus->inf);
        }
        
        /* Marca di fine lista */
        paus->pun = NULL;
    }

    return (p);
}

/* Funzione per la visualizzazione della lista.
Il parametro in ingresso è il puntatore alla testa */
void visualizza_lista (struct elemento *p)
{   
    /* Ciclo di scansione della lista */
    printf("\npunt_lista---> ");
    
    while (p != NULL)
    {
        /* Visualizza il campo informazione */
        printf("%d", p->inf);

        /* Scorri di un elemento in avanti */
        printf("---> ");
        p = p->pun;
        
    }
    printf("NULL\n\n");
}
// Marco Fiorillo 10/10/2021
