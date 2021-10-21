/* 172.
    Scrivere una funzione che calcoli il numero di livelli di un albero memorizzato in una lista multipla.
*/

int findHeight(struct node *root)
{
    int leftHeight;     /* altezza sinistra */
    int rightHeight;    /* altezza destra */
    int other;          /* altri nodi particlari del grafo */

    if (root == NULL)
        return -1;

    /* ricorsione */
    leftHeight = findHeight(root->left);
    rightHeight = findHeight(root->right);
    other = findHeight (root->other);

    /* esito */
    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else if (rightHeight > leftHeight)
        return rightHeight + 1;
    else 
        return other + 1
}
// Marco Fiorillo 21/10/2021
