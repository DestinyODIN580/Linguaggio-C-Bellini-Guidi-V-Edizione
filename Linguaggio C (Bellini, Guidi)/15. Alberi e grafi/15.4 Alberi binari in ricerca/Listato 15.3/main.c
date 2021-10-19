/* Listato 15.3 Ricerca di un valore nell’albero binario */

/* Ricerca ottimizzata */
void ric_bin (struct nodo *p, int val, struct nodo **p_ele)
{
    if (p != NULL)
        if (val == p->inf)
        {
            printf (" trovato ");
            *p_ele = p;
        }
        else if (val < p->inf)
        {
            printf (" sinistra");
            ric_bin (p->alb_sin, val, p_ele);
        }
        else
        {
            printf (" destra");
            ric_bin (p->alb_des, val, p_ele);
        }
}
// Marco Fiorillo 19/10/2021
