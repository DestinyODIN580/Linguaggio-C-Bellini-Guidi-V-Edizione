/* Listato 15.1 - Creazione e visita in ordine anticipato di una albero binario */

/* Creazione di un albero binario e visita in ordine anticipato. L'etichetta dei nodi
    e'un valore intero, le occorrenze multiple dello stesso valore non vengono
    memorizzate */

#include <stdio.h>
#include <stdlib.h>

struct nodo
{
    int inf;

    struct nodo *albSin;
    struct nodo *albDes;
};

struct nodo *albBin (void);
struct nodo *creaNodo (struct nodo *, int);

void anticipato (struct nodo *);

int main (int argc, char const *argv[])
{
    struct nodo *radice;    /* puntatore alla radice dell'albero */

    radice = albBin ();     /* invoca la funzione per la creazione dell'albero binario */


    printf ("\nVISITA IN ORDINE ANTICIPATO\n")                ;
    anticipato (radice);
}

/* Crea l'albero binario. Per ogni etichetta immessa dall'utente, invoca
    la funzione creaNodo. Ritorna al chiamante la radice dell'albero */

struct nodo *albBin (void)
{
    struct nodo *p = NULL;
    struct nodo x;


    do
    {
        printf ("\nInserire una informazione (0 per finire): ");
        scanf ("%d", &x.inf);

        if (x.inf != 0)
            p = creaNodo (p, x.inf);

    } while (x.inf != 0);   /* invoca creaNodo () */


    return p;               /* ritorna la radice */
}

/* Visita ricorsivamente l'albero alla ricerca del punto di inserimento. Quando trova la
    posizione, crea un nodo, vi inserisce l'etichetta e ritorna il puntatore a tale nodo

    Parametri in ingresso:
        p   e'il puntatore alla radice
        val e'l'etichetta da inserire nel nodo */

struct nodo *creaNodo (struct nodo *p, int val)
{
    if (p == NULL)  /* il punto di inserimento e'stato reperito */
    {
        /* Creazione del nodo */
        p = (struct nodo *) malloc (sizeof (struct nodo));
        p->inf = val;       /* inserimento di val in elemento */
        p->albSin = NULL;   /* marca di albero sinistro vuoto */
        p->albDes = NULL;   /* marca di albero destro vuoto */
    }
    else    /* ricerca del punto di inserimento */
    {
        if (val > p->inf)       /* visita il sottoalbero destro */
            p->albDes = creaNodo (p->albDes, val);
        
        else if (val < p->inf) /* visita il sottoalbero sinistro */
            p->albSin = creaNodo (p->albSin, val);
        
    }

    return p;       /* ritorna il puntatore alla radice */
}

/* Visita l'albero binario in ordine anticipato */

void anticipato (struct nodo *p)
{
    if (p != NULL)
    {
        printf ("%d ", p->inf); /* visita la radice */
        anticipato (p->albSin); /* visita il sottoalbero sinistro */
        anticipato (p->albDes); /* visita il sottoalbero destro */
    }
}
// Marco Fiorillo 19/10/2021
