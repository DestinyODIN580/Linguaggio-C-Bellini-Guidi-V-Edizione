/* 160.
    Si consideri la seguente definizione di nodo di albero binario:

        struct nodo
        {
            int inf;
            int occorrenze;

            struct nodo *alb_sin;
            struct nodo *alb_des;
        };

    Costruire la funzione crea_nodo2 modificando crea_nodo del primo esempio di questo capitolo, in modo che
    venga calcolato il numero di occorrenze multiple dello stesso valore, eventualmente immesse dall’utente, e vengano
    memorizzate nel nodo stesso nel campo occorrenze.
*/

struct nodo *creaNodo2 (struct nodo *p, int val)
{
    if (p == NULL) /* il punto di inserimento e'stato reperito */
    {
        /* Creazione del nodo */
        p = (struct nodo *) malloc (sizeof(struct nodo));
        p->inf = val;                                   /* inserimento di val in elemento */
        p->occorrenze = 0;                              /* inzializzazione di occorrenze */
        p->albSin = NULL;                               /* marca di albero sinistro vuoto */
        p->albDes = NULL;                               /* marca di albero destro vuoto */
    }
    else /* ricerca del punto di inserimento */
    {
        if (val > p->inf) /* visita il sottoalbero destro */
            p->albDes = creaNodo(p->albDes, val);

        else if (val < p->inf) /* visita il sottoalbero sinistro */
            p->albSin = creaNodo(p->albSin, val);
        else
            p->occorrenze++;   /* esito */
    }


   return p; /* ritorna il puntatore alla radice */
}
// Marco Fiorillo 20/10/2021
