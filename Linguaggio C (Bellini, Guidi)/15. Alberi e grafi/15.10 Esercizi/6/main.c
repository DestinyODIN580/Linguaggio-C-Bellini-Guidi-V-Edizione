/* 164.
    Scrivere un programma che da un albero binario, memorizzato in una lista doppia, elimini (rilasciando
    opportunamente la memoria) il sottoalbero la cui etichetta della radice viene passata in ingresso dall’utente.
*/

void deleteNode(struct node *root, int data)
{
    if (root == NULL)
        return;

    /* esito */
    else if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right->deleteNode(root->right, data);
    else
    {
        /* no child */
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            root = NULL;
        }
        /* one child */
        else if (root->left == NULL)
        {
            struct node *temp = root;
            root = root->right;
            free(root);
        }
        else if (root->right == NULL)
        {
            struct node *temp = root;
            root = root->left;
            free(root);
        }
        /* two children */
        else
        {
            int min = root->data;
            struct node *temp = root->right;

            for (; temp->right != NULL; temp = temp->right)
                if (temp->data < min)
                    min = root->data;

            root->data = temp->data;
            root->rigth = deleteNode(root->right, temp->data);
        }

        return root;
    }
}
// Marco Fiorillo 21/10/2021
