/* 15.2 - Visita in ordine simmetrico e ricerca di un valore nell’albero binario */

/* Da aggiungere alle dichiarazioni iniziali del Listato 15.1 */
void simmetrico (struct nodo *);
void ricerca (struct nodo *, int, struct nodo **);

/* Da aggiungere al main del Listato 15.1 */ 
struct nodo *trovato;
int chi;
/* ... */
printf ("\nVISITA IN ORDINE SIMMETRICO\n");
simmetrico (radice);

printf ("\nInserisci il valore da ricercare: ");
printf ("\nRICERCA COMPLETA");
scanf ("%d", &chi);

trovato = NULL;
ricerca (radice, chi, &trovato);
if (trovato != NULL)
    printf ("\n Elemento %d presente \n", trovato->inf);
else
    printf ("\n Elemento non presente\n");

/* Funzione che visita l'albero binario in ordine simmetrico.
    Da aggiungere al Listato 15.1 */
void simmetrico(struct nodo *p)
{
    if (p != NULL)
    {
        simmetrico(p->alb_sin);
        printf("%d ", p->inf);
        simmetrico(p->alb_des);
    }
}

/* Funzione che ricerca un'etichetta nell'albero binario.
    Da aggiungere al Listato 15.1.
    Visita l'albero in ordine anticipato */
void ricerca(struct nodo *p, int val, struct nodo **p_ele)
{
    if (p != NULL)          /* La ricerca ha dato esito positivo */
        if (val == p->inf)
                            /* p_ele è passato per indirizzo
                            per cui l'assegnamento di p
                            avviene sul parametro attuale */
            *p_ele = p;

        else
        {
            ricerca(p->alb_sin, val, p_ele);
            ricerca(p->alb_des, val, p_ele);
        }
}
// Marco Fiorillo 19/10/2021
