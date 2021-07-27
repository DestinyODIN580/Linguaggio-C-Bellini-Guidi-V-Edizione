/* 111.
    Confrontare gli algoritmi dei due precedenti esercizi e dire qual è più veloce; motivare la risposta
*/

/* L'algoritmo di Euclide e'piu'veloce in quanto i confronti che si dovrebbero effettuare sono in media molti
    di meno dato che grazie all'operazione di divisione intera si riesce a raggiungere piu'rapidamente l'MCD
    che con la sottrazione */

int MCD (int t, int k)
{

    /* calcolo dell'MCD */
    if (!k)
        return t;
    else if (k > t)
        return MCD (k, t);
    else
        return MCD (k, t % k);
}

int MCD (int t, int k)
{


    /* calcolo dell'MCD */
    if (t == k)
        return t;
    else if (t > k)
        return MCD (t - k, k);
    else
        return MCD (k, t);

}
// Marco Fiorillo 28/07/2021
