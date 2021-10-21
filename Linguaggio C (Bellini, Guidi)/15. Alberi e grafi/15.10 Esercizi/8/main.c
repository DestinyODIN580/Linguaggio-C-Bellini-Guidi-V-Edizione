/* 166.
    Scrivere una funzione che un dato grafo, memorizzato in una matrice di adiacenze, e date in ingresso le etichette di
    due nodi, verifichi se esiste un arco che li collega, nel qual caso lo cancelli.
*/

int deleteArch (int node1, int node2)
{
    /* esitpo */
    if (!mat[node1][node2])
        printf ("Arco inesistente");
    else
        mat[node1][node2] = 0;
}
// Marco Fiorillo 21/10/2021
