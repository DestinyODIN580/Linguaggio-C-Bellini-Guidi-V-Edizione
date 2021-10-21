/* 168.
    Risolvere i due esercizi precedenti ma con il grafo memorizzato in una lista di successori.
*/

int deleteArch(int node1, int node2)
{
    /* esito */
    if (!p->val)
        printf("Arco inesistente");
    else
        p->val = 0;
}

int veryfyConnection(int node1, int node2)
{
    int out;    /* flag */

    /* esitp */
    for (out = 0; p->next != NULL; p = p->next)
        if (p->val)
            for (; p->other; p = p->other)
                if (p->val)
                    out = 1;

    return out;
}
// Marco Fiorillo 21/10/2021
