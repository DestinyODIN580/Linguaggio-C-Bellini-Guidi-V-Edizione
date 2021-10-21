/* 15.7 - Rappresentazione di grafi */

/* Trasformazione della rappresentazione di un grafo
    da una matrice di adiacenze a una lista di successori */

#include <stdio.h>
#include <malloc.h>

struct nodo
{
    char inf;
    struct successore *pun;
};

/* Struttura di un nodo */
struct successore
{
    /* Elemento della lista di successori */
    int inf;
    struct successore *pun;
};

int a[10][10];
struct nodo s[10];
int n;
void mat_adiacenze(void);
void vis_mat_adiacenze(void);
void successori(void);
void crea_succ(int, int);
void visita(void);
/* Matrice di adiacenze */
/* Array di nodi */
/* Numero di nodi */

int main (int argc, char const *argv[])
{
    mat_adiacenze();        /* Creazione della matrice di adiacenze */
    vis_mat_adiacenze();    /* Visualizzazione della matrice */
    successori();           /* Creazione delle liste di successori */
    viewFromKey(1);               /* Visual. dei successori di ogni nodo */    
}

/* Crea la matrice di adiacenze */
void mat_adiacenze(void)
{
    int i, j;
    char invio;


    printf ("\nNumero di nodi: ");
    scanf ("%d", &n);
    scanf ("%c", &invio);


    for (i = 0; i < n; i++)
    {
        /* Richiesta etichette dei nodi */
        printf ("\nEtichetta del nodo: ");
        scanf ("%c", &s[i].inf);
        scanf ("%c", &invio);
        s[i].pun = NULL;
    }

    for (i = 0; i < n; i++)
        /* Richiesta archi orientati */
        for (j = 0; j < n; j++)
        {
            printf ("\nArco orientato da [%c] a [%c] (0 no, 1 si) ? ",
                   s[i].inf, s[j].inf);
            scanf ("%d", &a[i][j]);
        }
}

/* Visualizza la matrice di adiacenze */
void vis_mat_adiacenze (void)
{
    int i, j;


    printf ("\nMATRICE DI ADIACENZE\n");
    for (i = 0; i < n; i++)
        printf ("%c", s[i].inf); /* Visualizza i nodi (colonne) */

    for (i = 0; i < n; i++)
    {
        printf("\n%c ", s[i].inf);  /* Visualizza i nodi (righe) */
        for (j = 0; j < n; j++)
            printf("%d", a[i][j]);  /* Visualizza gli archi */
    }
}


/* Crea le liste di successori. Per ogni arco rappresentato
    nella matrice di adiacenze chiama crea_succ() */
void successori (void)
{
    int i, j;


    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] == 1)
                crea_succ (i, j);
}

/* Dato un certo arco nella matrice di adiacenze crea
    il rispettivo elemento di lista */
void crea_succ (int i, int j)
{
    struct successore *p;


    if (s[i].pun == NULL)
    {
        /* Non esiste la lista dei successori */
        s[i].pun = (struct successore *) (malloc (sizeof (struct successore)));
        s[i].pun->inf = j;
        s[i].pun->pun = NULL;
    }
    else
    {
        /* Esiste la lista dei successori */
        p = s[i].pun;
        while (p->pun != NULL)
            p = p->pun;
        p->pun = (struct successore *) (malloc (sizeof (struct successore)));
        p = p->pun;
        p->inf = j;
        p->pun = NULL;
    }
}

/* Per ogni nodo del grafo restituisce i suoi successori.
    Lavora sulle liste di successori */



void viewFromKey (int key)
{
    int i;

    printf("\n[%c] ha come successori: ", s[key].inf);
    struct successore *p = s[key].pun;
    while (p != NULL)
    {
        printf(" %c", s[p->inf].inf);
        p = p->pun;
    }
}
/*
void visita (void)
{
int i;

struct successore *p;


printf ("\n");
for (i = 0; i < n; i++)
{
    printf ("\n[%c] ha come successori: ", s[i].inf);
    p = s[i].pun;
    while (p != NULL)
    {
        printf (" %c", s[p->inf].inf);
        p = p->pun;
    }
}
}*/
// Marco Fiorillo 19/10/2021
