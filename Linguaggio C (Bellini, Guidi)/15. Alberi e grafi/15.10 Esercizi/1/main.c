/* 159.
    Scrivere una funzione ricorsiva per visitare in ordine differito un albero binario. Si consideri la stessa struttura dei
    nodi vista nel primo esempio di questo capitolo.
*/

void postOrder (struct node *root)
{   
    if (root == NULL)
        return;

    postOrder (root->left);
    postOrder (root->right);

    /* esito */
    printf ("%d", root->value);
}
// Marco Fiorillo 20/10/2021
