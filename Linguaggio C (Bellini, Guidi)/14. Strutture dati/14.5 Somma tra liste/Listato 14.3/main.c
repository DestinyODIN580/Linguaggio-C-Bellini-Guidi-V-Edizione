/* 14.3 - Somma dei valori di due liste */

/* Crea due liste e le visualizza. Somma gli elementi
corrispondenti delle due liste, inserisce il risultato
in una terza lista e la visualizza */

#include <stdio.h>
#include <malloc.h>

struct elemento
{
    int inf;
    struct elemento *pun;
};

struct elemento *crea_lista2();
struct elemento *somma_liste(struct elemento *,struct elemento *);

void visualizza_lista(struct elemento *);

int main (int argc, char const *argv[])
{
    struct elemento *punt_lista1, *punt_lista2, *punt_lista3;

    
    printf("\n PRIMA LISTA \n");
    punt_lista1 = crea_lista2();
    
    printf("\n SECONDA LISTA \n");
    punt_lista2 = crea_lista2();

    visualizza_lista(punt_lista1);
    visualizza_lista(punt_lista2);

    /* Invocazione della funzione per la somma delle liste */
    punt_lista3 = somma_liste(punt_lista1, punt_lista2);

    /* Visualizzazione della lista somma delle precedenti */
    visualizza_lista(punt_lista3);
}

/* Somma gli elementi corrispondenti di due liste
e inserisce il risultato in una terza lista
*/

struct elemento *somma_liste(struct elemento *p1, struct elemento *p2)
{
    struct elemento *p3 = NULL, *p3aus;

    if (p1 != NULL && p2 != NULL)
    {
        /* Creazione primo elemento */
        p3 = (struct elemento *) malloc (sizeof(struct elemento));
        p3->inf = p1->inf + p2->inf;    /* somma */

        p3aus = p3;         /* p3aus punta III lista */
        p1 = p1->pun;       /* Scorrimento I lista */
        p2 = p2->pun;       /* Scorrimento II lista */

        /* Creazione elementi successivi */
        for(; p1 != NULL && p2 != NULL;)
        {
            p3aus->pun = (struct elemento *) malloc (sizeof(struct elemento));
            p3aus = p3aus->pun;

            /* Scorrimento III lista */
            p3aus->inf = p1->inf + p2->inf; /* Somma */
            p1 = p1->pun;   /* Scorrimento I lista*/
            p2 = p2->pun;   /* Scorrimento II lista */
        }
        p3aus->pun = NULL;    /* Marca di fine III lista */
    }
    return(p3);     /* Ritorno del puntatore alla III lista */
}

/* ATTENZIONE: devono essere aggiunte le definizioni delle
funzioni per creare - crea_lista2() - e visualizzare
– visualizza_lista() - la lista presenti nel precedente Listato 14.2
*/

// Marco Fiorillo 13/10/2021
