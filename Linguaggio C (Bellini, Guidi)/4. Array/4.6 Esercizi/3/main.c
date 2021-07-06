/* 38.
    Scrivere un programma che inizializzi e quindi visualizzi un vettore con i valori alternati 0, 1, 0, 1, 0, 1, 0, 1, …
    Ripetre l’esercizio con i valori 0, −3, 6, −9, 12, −15, 18, −21, ....
*/

#include <stdio.h>

#define LEN 100

int main (int argc, char const *argv[])
{
    int vet1[LEN];      /* sequenza 1 */
    int vet2[LEN];      /* sequenza 2 */
    int vet2Value;      /* valore seconda sequenza */
    int vetLen;         /* lunghezza dei vettori */
    int i, j;           /* contarori */


    /* assegnazione vetLen */
    printf ("Lunghezza del vettore > ");
    scanf ("%d", &vetLen);

    /* esito (stampa prima sequenza) */
    printf ("Vettore 1 >> [ %d, ", vet1[0] = 0);
    for (i = 1; i < vetLen - 1; i++)
    {
        if (vet1[i - 1])
            printf ("%d, ", vet1[i] = 0);
        else    
            printf ("%d, ", vet1[i] = 1);
    }
    if (vet1[i - 1])
        printf ("%d ];\n", vet1[i] = 0);
    else    
        printf ("%d ];\n", vet1[i] = 1);


    /* esito (stampa seconda sequenza) */
    printf ("Vettore 2 >> [ %d, ", vet2[0] = 0);
    for (i = 1, vet2Value = -3; i < vetLen - 1; i++)
    {
        if (vet2Value < 0)
        {
            printf ("%d, ", vet2[i] = vet2Value);
            vet2Value = vet2Value * (- 1) + 3;
        }
        else
        {
            printf ("%d, ", vet2[i] = vet2Value);
            vet2Value = vet2Value * (- 1) - 3;
        }
    }
    if (vet2Value < 0)
    {
        printf ("%d ];\n ", vet2[i] = vet2Value);
        vet2Value = vet2Value * (- 1) + 3;
    }
    else
    {
        printf ("%d ];\n ", vet2[i] = vet2Value);
        vet2Value = vet2Value * (- 1) - 3;
    }


    printf ("\n");
    return 0;
}
// Marco Fiorillo 6/07/2021
