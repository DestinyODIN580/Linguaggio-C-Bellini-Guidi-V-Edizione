/* 158.
    Aggiungere alle soluzioni dei due esercizi precedenti le funzioni che permettono di verificare se un certo valore
    passato in ingresso dall’utente è presente nella coda.
*/

int listFind (struct list *origin, int n)
{
    int i;          /* indice della lista */

    struct list *p; /* setup locale della lista */

    i = 0;
    p = origin;


    /* esito */
    while (p->forw != NULL)
    {
        if (p->num == n)
            return i;
        
        p = p->forw;
    }
    

    return -1;
}
// Marco Fiorillo 18/10/2021
