/* 15.4 - Creazione di un albero a partire dalla sua rappresentazione parentetica */

/* Creazione di un albero e visita in ordine anticipato.
    L'albero viene immesso dall'utente informa parentetica
    anticipata. L'etichetta dei nodi è un carattere.
    L'albero è implementato con liste multiple */

#include <stdio.h>
#include <stddef.h>

struct nodo
{
    char inf;
    struct nodo *figlio;
    struct nodo *p_arco;
};

void anticipato (struct nodo *);

struct nodo *albero ();
struct nodo *crea_albero (struct nodo *);

int main (int argc, char const *argv[])
{
    struct nodo *radice;

    radice = albero();


    /* Creazione dell'albero */
    printf ("\nVISITA IN ORDINE ANTICIPATO\n");
    anticipato (radice);
}
/* Legge il primo carattere della rappresentazione parentetica
 e invoca la funzione crea_albero() */
   
struct nodo *albero () 
{
    struct nodo *p = NULL;
    char car;


    printf ("\nInserisci la rappresentazione dell'albero: ");
    scanf ("%c", &car);

    p = crea_albero (p);
    
    /* Ritorna il puntatore alla radice al chiamante */
    return (p);
    
}
/* Crea un nodo e vi inserisce la relativa etichetta. Per ogni figlio crea un
    arco. Invoca ricorsivamente se stessa */
struct nodo *crea_albero (struct nodo *p)
{
    struct nodo *paus;
    char car; /* crea il nodo */

    p = (struct nodo *) malloc (sizeof (struct nodo));
    
    
    scanf ("%c", &p->inf);  /* Inserimento del valore nel nodo */
    paus = p;
    scanf ("%c", &car);      /* Lettura del carattere successivo */
    while (car == '(')      /* Per ogni figlio ripeti */
    {
        /* crea l'arco */
        paus->p_arco = (struct nodo *) malloc (sizeof (struct nodo));
        paus = paus->p_arco;
        
        /* Invoca se stessa passando il campo figlio dell'elem. creato */
        paus->figlio = crea_albero (paus->figlio);

        /* Lettura del carattere successivo */
        scanf ("%c", &car);
    }
    paus->p_arco = NULL;
    
    /* Ritorna il puntatore alla radice al chiamante */
    return (p);
}

/* Visita ricorsivamente l'albero in ordine anticipato */
void anticipato (struct nodo *p)
{
    printf ("(%c", p->inf);
    p = p->p_arco;
    while (p != NULL)
    {
        anticipato (p->figlio);
        p = p->p_arco;
    }
    printf (")");
}
// Marco Fiorillo 19/10/2021
