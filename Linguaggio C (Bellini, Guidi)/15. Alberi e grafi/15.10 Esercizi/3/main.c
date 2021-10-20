/* 161.
    Modificare la funzione che visita in forma simmetrica l’albero binario in modo che visualizzi, oltre al valore di ogni
    nodo, il corrispondente numero di occorrenze, memorizzate mediante la funzione crea_nodo2 dell’esercizio
    precedente.
*/

void postOrder (struct node *root)
{
    if (root == NULL)
        return;

    postOrder (root->left);

    /* esito */
    printf ("\nval = %d\n", root->value);
    printf ("\nocc = %d\n", root->occurrences);

    postOrder (root->right);
}
// Marco Fiorillo 20/10/2021
