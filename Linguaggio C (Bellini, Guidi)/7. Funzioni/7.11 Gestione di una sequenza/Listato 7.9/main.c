/* 7.9 - Gestione di una sequenza con l'uso di funzioni per immissione, ordinamento
    ricerca completa, ricerca binaria e visualizzazione */

#include <stdio.h>

#define MAX_ELE 1000        /* massimo numero di elementi */

int vet[MAX_ELE];           /* array che ospita la sequenza */

void gestione_sequenza (void);
void visualizzazione (int);
void ordinamento (int);

int immissione(void);
int ricerca(int, int);
int ric_bin(int, int);


int main (int argc, char const *argv[])
{

    gestione_sequenza ();

    printf ("\n");
    return 0;
}

void gestione_sequenza (void)
{
    char invio;

    int n;
    int scelta;
    int ele, posizione;

    scelta = -1;


    while (scelta != 0)
    {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf ("\t\t\t GESTIONE SEQUENZA");
        printf ("\n\n\n\t\t\t 1. Immissione");
        printf ("\n\n\t\t\t 2. Ordinamento");
        printf ("\n\n\t\t\t 3. Ricerca completa");
        printf ("\n\n\t\t\t 4. Ricerca binaria");
        printf ("\n\n\t\t\t 5. Visualizzazione");
        printf ("\n\n\t\t\t 0. fine");
        printf ("\n\n\n\t\t\t\t Scegliere una opzione: ");
        scanf ("%d", &scelta);
        scanf ("%c", &invio);
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        switch (scelta)
        {
            case (1):
                n = immissione ();
                break;

            case (2):
                ordinamento (n);
                break;

            case (3):
                printf("Elemento da ricercare: ");
                scanf("%d", &ele);
                scanf("%c", &invio);

                posizione = ricerca (n, ele);

                if (ele == vet[posizione])
                    printf("\nElemento %d presente in posizione %d\n", ele, posizione);
                else
                    printf("\nElemento non presente!\n");

                printf("\n\n Premere Invio per continuare...");
                scanf("%c", &invio);

                break;

            case (4):
                printf("Elemento da ricercare: ");
                scanf("%d", &ele);
                scanf("%c", &invio);

                posizione = ric_bin(n, ele);

                if(posizione != -1)
                    printf("\nElemento %d presente in posizione %d\n", ele, posizione);
                else
                    printf("\nElemento non presente!\n");

                printf("\n\n Premere Invio per continuare...");
                scanf("%c", &invio);

                break;

            case (5):
                visualizzazione (n);
                break;
        }
    }
}

int immissione ()
{
    char invio;

    int i, n;


    do
    {
        printf ("\nNumero elementi: ");
        scanf ("%d", &n);
    } while (n < 1 || n > MAX_ELE);

    for (i = 0; i < n; i++)
    {
        printf ("\nImmettere un intero n.%d: ", i);
        scanf ("%d", &vet[i]);
    }

    return (n);
}

void ordinamento (int n)
{
    int i, p, k, n1;
    int aux;

    p = n;
    n1 = p;


    do
    {
        k = 0;

        for (i = 0; i < n1-1; i++)
            if(vet[i] > vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                k = 1;
                p = i + 1;
            }
        n1 = p;
    } while (k == 1);
}

/* Ricerca sequenziale */
int ricerca (int n, int ele)
{
    int i;

    i = 0;


    while (ele != vet[i] && i < n-1) 
        ++i;

    return (i);
}

/* ricerca binaria */
int ric_bin (int n, int ele)
{
    int i, alto, basso, pos;

    alto = 0;
    basso = n - 1;
    pos = -1;


    do
    {
        i = (alto + basso) / 2;

        if (vet[i] == ele)
            pos = i;
        else if (vet[i] < ele)
            alto = i + 1;
        else
            basso = i - 1;
    } while(alto <= basso && pos == -1);

    return (pos);
}

void visualizzazione (int n)
{
    char invio;

    int i;
    

    for (i = 0; i < n; i++)
        printf("\n%d", vet[i]);

    printf("\n\n Premere Invio per continuare...");
    scanf("%c", &invio);
}
// Marco Fiorillo 19/07/2021
