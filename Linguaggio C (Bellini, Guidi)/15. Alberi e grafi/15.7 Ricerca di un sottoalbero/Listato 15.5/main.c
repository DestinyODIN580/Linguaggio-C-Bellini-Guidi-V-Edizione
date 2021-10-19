/* 15.5 Ricerca di un nodo e visualizzazione del sottoalbero che si diparte da esso */

/* Da aggiungere al Listato 15.4
... */

struct nodo *trovato;
char sotto_albero, invio;

/* ... */

scanf ("%c", &invio);
printf ("\nInserisci la radice del sottoalbero: ");
scanf ("%c", &sotto_albero);

trovato = NULL;
ricerca ( radice, sotto_albero, &trovato );
{
    if (trovato!=NULL)
    {
        printf ("\n SOTTOALBERO IN ORDINE ANTICIPATO \n");
        anticipato (trovato);
    }
    else
        printf ("\n Sottoalbero non presente");
}

/* Visita in ordine anticipato, ricercando il sottoalbero con
radice sa. Se lo reperisce assegna il suo indirizzo a *punt_sa */
ricerca (struct nodo *p, char sa, struct nodo **punt_sa)
{
    if (sa == p->inf)
        *punt_sa = p;
    else
    {
        p = p->p_arco;
        while (p != NULL)
        {
            ricerca (p->figlio, sa, punt_sa);
            p = p->p_arco;
        }
    }
}
// Marco Fiorillo 19/10/2021
