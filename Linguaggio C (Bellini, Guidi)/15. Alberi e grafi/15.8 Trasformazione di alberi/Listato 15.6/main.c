/* 15.6 - Creazione di un albero binario corrispondente all’albero ordinato (non binario) immesso in forma
parentetica dall’utente */

/* Dalla rappresentazione parentetica di un albero ricava il
    corrispondente albero binario, che visita in ordine simmetrico,
    anticipato e differito.
    Per la creazione usa una funzione iterativa (non ricorsiva)
    con l'ausilio di una pila gestita mediante una lista lineare
    il cui campo inf è un puntatore ai nodi dell'albero binario.
    Per le visite in ordine simmetrico, anticipato e differito
    rimangono valide le funzioni ricorsive già esaminate */

#include <stdio.h>
#include <stddef.h>

struct nodo                     /* Nodo dell'albero binario */
{
    char inf;
    struct nodo *alb_sin;
    struct nodo *alb_des;
};
                           
struct nodo *alb_bin_par ();    /* Funzione per la creazione */

void anticipato (struct nodo *);/* Visite */
void simmetrico (struct nodo *);
void differito (struct nodo *);

struct elemento                 /* Elemento della lista lineare */
{
    struct nodo *inf;           /* con cui è implementata la pila */
    struct elemento *pun;
};

/* Funzioni per la gestione della pila */
struct elemento *inserimento (struct elemento *, struct nodo *);
struct elemento *eliminazione (struct elemento *, struct nodo **);

int pila_vuota (struct elemento *);

int main (int argc, char const *argv[])
{
    struct nodo *radice;

    radice = alb_bin_par ();

    printf ("\nVISITA IN ORDINE SIMMETRICO\n");
    simmetrico (radice);
    printf ("\nVISITA IN ORDINE ANTICIPATO\n");
    anticipato (radice);
    printf ("\nVISITA IN ORDINE DIFFERITO\n");
    differito (radice);
}

/* Dalla rappresentazione parentetica di un albero crea
    il corrispondente albero binario */
struct nodo *alb_bin_par()
{
    struct nodo *p;
    struct nodo *paus, *pp;

    char car;

    int logica = 1;

    struct elemento *punt_testa = NULL;


    /* Inizializzazione pila */
    printf ("\nInserisci la rappresentazione dell'albero: ");
    scanf ("%c", &car);

    /* creazione della radice */
    p = (struct nodo *) malloc (sizeof (struct nodo));
    scanf ("%c", &p->inf);
    p->alb_sin = NULL;  /* Inizializzazione dei puntatori */
    p->alb_des = NULL;  /* ai sottoalberi */

    paus = p;
    logica = 1;

    do
    {
        scanf ("%c", &car);
        if (car == '(')
        {
            pp = (struct nodo *) malloc (sizeof (struct nodo));
            scanf ("%c", &pp->inf);
            pp->alb_sin = NULL;
            pp->alb_des = NULL;
            if (logica)
            {
                paus->alb_sin = pp;

                /* Inserimento in pila */
                punt_testa = inserimento (punt_testa, paus);
            }
            else
            {
                paus->alb_des = pp;
                logica = 1;
            }
            paus = pp;
        }
        else if (logica)
            logica = 0;
        else
            /* Eliminazione dalla pila */
            punt_testa = eliminazione (punt_testa, &paus);
    } while (!pila_vuota (punt_testa));


    return (p);
}

/* Funzioni per la gestione della pila */
struct elemento *inserimento (struct elemento *p, struct nodo *ele)
{
    struct elemento *paus;

    paus = (struct elemento *) malloc (sizeof(struct elemento));


    if (paus == NULL)
        return NULL;

    paus->pun = p;
    p = paus;
    p->inf = ele;


    return (p);
}

struct elemento *eliminazione (struct elemento *p, struct nodo **ele)
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
        return (1);
    else
        return (0);
}

/* Devono essere incluse le funzioni ricorsive di visita dell'albero binario già esaminate, dove il valore visualizzato è
di tipo char
... */

// Marco Fiorillo 19/10/2021
