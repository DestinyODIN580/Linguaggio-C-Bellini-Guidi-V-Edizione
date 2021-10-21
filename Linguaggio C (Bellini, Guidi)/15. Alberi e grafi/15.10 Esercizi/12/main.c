/* 170.
    Scrivere una funzione che stabilisca se due alberi binari sono uguali.
*/
#define R 100
#define C 2
/* variabili globali */
int mat[R][C];

int i = j = 0;


int seekTree (struct node *root)
{
    if (root == NULL)
        return i;

    /* scan dell'albero */
    seekTree (root->left);
    seekTree (root->right);
    mat[i++][j] = root->value;
}

void eqTree(struct node *root1, struct node *root2)
{
    int len1, len2; /* lunghezze alberi */
    int out;        /* flag */

    len1 = seekTree (root1);
    j++;
    len2 = seekTree(root2);


    /* esito */
    if (len1 != len2)
        return 0;
    else
        for (i = 0; i < len1; i++)
            if (mat[0][k] != mat[1][i])
                out = 0;

    return out
}
// Marco Fiorillo 21/10/2021
