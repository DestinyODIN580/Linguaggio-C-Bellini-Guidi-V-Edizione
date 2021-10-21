/* 167.
    Verificare se, dato un grafo memorizzato in una matrice di adiacenze, e date in ingresso le etichette di due nodi, dal
    primo nodo è possibile arrivare al secondo attraverso un cammino di archi orientati.    
*/

int veryfyConnection (int node1, int node2)
{
    int i, y, j;    /* contatori */
    int out;        /* flag */


    /* esito */
    for (out = i = 0; i < numberOfColumns; i++)
        if (mat[node1][i])
            for (y = 0, j = i; j < numberOfColumns; j++)
                if (mat[y][node2])
                    out = 1;

    return out;
}
// Marco Fiorillo 21/10/2021
