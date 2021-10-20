/* 162.
    Scrivere una funzione ricorsiva per visitare in ordine differito un albero implementato mediante liste multiple. Si
    consideri la stessa struttura dei nodi vista negli esempi di questo capitolo:
    
        struct nodo
        {
            char inf;

            struct nodo *figlio;
            struct nodo *p_arco;
        };
*/

void inOrder (struct node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);

    /* esito */
    printf("%d ", root->value);

    inOrder(root->right);
}
// Marco Fiorillo 20/10/2021
