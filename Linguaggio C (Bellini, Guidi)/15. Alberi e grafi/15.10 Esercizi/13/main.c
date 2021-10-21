/* 171.
    Dato l’albero binario costruito con il Listato 15.1 realizzare due funzioni, la prima che calcoli la somma totale delle
    informazioni contenute nei nodi, l’altra che determini il maggiore e il minore.
*/
#include <limits.h>

int sum = 0;
int min = INT_MAX;
int max = INT_MIN;

int min (struct node *root)
{
    /* esito */
    if (root == NULL)
        return min;

    /* ricorsione */
    min (root->left);
    min (root->right);

    if (root->val < min)
        min = root->val;
}

int max (struct node *root)
    /* esito */
{
    if (root == NULL)
        return max;

    /* ricorsione */
    max (root->left);
    max (root->right);

    if (root->val > max)
        max = root->val;
}

int sum (struct node *root)
{   /* esito */
    if (root == NULL)
        return sum;

    /* ricorsione */
    sum (root->left);
    sum (root->right);

    sum += root->val;
}
// Marco Fiorillo 21/10/2021
