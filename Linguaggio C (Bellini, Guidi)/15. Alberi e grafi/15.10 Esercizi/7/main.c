/* 165.
    Ampliare il programma di implementazione di un grafo mediante una lista di successori esaminato nel capitolo, in
    modo che accetti in ingresso il valore di un’etichetta e visualizzi le etichette di tutti i nodi da esso raggiungibili. Per la
    scansione dei nodi connessi si utilizzi una funzione ricorsiva.
    [Prestare attenzione al fatto che la scansione può portare a un ciclo infinito se nel percorso si passa per più di una volta
    sullo stesso nodo.]
*/

void viewFromKey (int key, struct successore *p)
{

    if (p == NULL)
        return;
    
    /* esito */
    printf("\n[%c] ha come successori: ", s[key].inf);
    p = s[key].pun;

    viewFromKey (key, p);
}
// Marco Fiorillo 21/10/2021
