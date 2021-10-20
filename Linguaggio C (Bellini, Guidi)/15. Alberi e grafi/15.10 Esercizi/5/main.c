/* 163.
    Scrivere una funzione che calcoli il numero di livelli di un albero binario memorizzato in una
    lista doppia.
*/

int findHeight (struct node *root)
{
    int leftHeight;
    int rightHeight;


    if (root == NULL)
        return -1;

    leftHeight = findHeight(root->left);
    rightHeight = findHeight(root->right);

    /* esito */
    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}
// Marco Fiorillo 20/10/2021
