/* 86.
    Esaminare i programmi di questo capitolo e scrivere per ognuno di essi la lista delle variabili globali all’intero
    programma e di quelle locali a ogni sottoprogramma.
*/

/* 7.1 - Dichiarazione, definizione e invocazione di una funzione */

#include <stdio.h>

double cubo (float);

int main (int argc, char const *argv[])
{
    float a;

    double b;


    printf ("Inserisci un numero: ");
    scanf ("%f", &a);

    b = cubo (a);

    printf ("%f elevato al cubo e'uguale a %f", a, b);


    printf ("\n");
    return 0;
}

double cubo (float c)
{
    return (c * c * c);
} */

// Variabili globali: - ;
// Variabili locali "main": -a, b;
// Variabili locali "cubo": c;

// ------------------------------------------------------------------

/* 7.2 - Dichiarazioni e definizioni di funzioni */

#include <stdio.h>

double quad (float);
double cubo (float);
double quar (float);
double quin (float);
double pote (float, int);

int main (int argc, char const *argv[])
{
    int base, esponente;

    double ptnz;


    printf ("Inserire base: ");
    scanf ("%d", &base);
    printf ("Inserire esponente (0-5): ");
    scanf ("%d", &esponente);

    ptnz = pote (base, esponente);

    if (ptnz == -1)
        printf ("Potenza non prevista\n");
    else    
        printf ("La potenza di %d di %d e'%f\n", esponente, base, ptnz);
    

    printf ("\n");
    return 0;
}

double quad (float c)
{
    return (c * c);
}

double cubo (float c)
{
    return (c * c * c);
}

double quar (float c)
{
    return (c * c * c * c);
}

double quin (float c)
{
    return (c * c * c * c * c);
}

double pote (float b, int e)
{
    switch (e)
    {
        case (0):
            return (1);
            break;

        case (1):
            return (b);
            break;

        case (2):
            return (quad (b));
            break;

        case (3):
            return (cubo (b));
            break;

        case (4):
            return (quar (b));
            break;

        case (5):
            return (quin (b));
            break;
        
        default:
            return (-1);
            break;
    }

}

// Variabili globali: - ;
// Variabili locali "main": base, esponente, ptnz;
// Variabili locali "quad": c;
// Variabili locali "cubo": c;
// Variabili locali "quar": c;
// Variabili locali "quin": c;
// Variabili locali "pote": b, e;

// ------------------------------------------------------------------

/* 7.3 - Esemplificazione di mascheramento dei nomi */

int x;                  /* nome globale */

f ()
{
    int x;              /* x locale che nasconde la x globale */
    x = 1;              /* assegna 1 a x locale */

    {
        int x;          /* nasconde il primo x locale */
        x = 2;          /* assegna 2 al secondo x locale */
    }

    x = 3;              /* assegna 3 al primo x locale */
}

scanf ("%d", &x);   

// Variabili globali: x;
// Variabili locali "f": x;
// Variabili locali 1. blocco in "f" = x;

// ------------------------------------------------------------------

/* 7.4 - Chiamata di funzione */

#include <stdio.h>

double area (float, float, char);

int main (int argc, char const *argv[])
{
    char p;

    float b, h;

    double a;


    printf ("Inserire poligono (Triangolo/Rettangolo): ");
    scanf ("%c", &p);

    printf ("\nInserire base: ");
    scanf ("%f", &b);
    printf ("\nInserire altezza: ");
    scanf ("%f", &h);

    a = area (b, h, p);

    printf ("Il poligono (b = %f, h = %f) ha area %f\n", b, h, a);


    printf ("\n");
    return 0;
}

double area (float base, float altezza, char poligono)
{
    switch (poligono)
    {
        case ('T'):
            return (base * altezza / 2.);
            break;
        
        case ('R'):
            return (base * altezza);
            break;

        default:
            return (-1);
            break;
    }
}

// Variabili globali: - ;
// Variabili locali "main": p, b, h, a;
// Variabili locali "area": base, altezza, poligono;

// ------------------------------------------------------------------

/* 7.5 - Le funzioni come strumento di riutilizzo del codice */

#include <stdio.h>

double area (float, float, char);

int main (int argc, char const *argv[])
{
    float b, h;

    double tri, ret;


    printf ("\nInserire base: ");
    scanf ("%f", &b);
    printf ("\nInserire altezza: ");
    scanf ("%f", &h);

    tri = area (b, h, 'T');
    ret = area (b, h, 'R');

    printf ("Il triangolo (b = %f, h = %f) ha area %f\n", b, h, tri);
    printf ("Il rettangolo (b = %f, h = %f) ha area %f\n", b, h, ret);

    printf ("\n");
    return 0;
}

double area (float base, float altezza, char poligono)
{
    switch (poligono)
    {
        case ('T'):
            return (base * altezza / 2.);
            break;
        
        case ('R'):
            return (base * altezza);
            break;

        default:
            return (-1);
            break;
    }
}

// Variabili globali: - ;
// Variabili locali "main": b, h, tri, ret;
// Variabili locali "area": base, altezza, poligono;

// ------------------------------------------------------------------

/* 7.6 Passaggio di parametri con variabile globale */

#include <stdio.h>

char str[] = "Lupus in fabula";

int lung_string (void);

int main (int argc, char const *argv[])
{
    int l;


    l = lung_string ();
    printf ("La stringa %s ha %d caratteri\n", str, l);

    printf ("\n");
    return 0;
}

int lung_string (void)
{
    int i;

    
    for (i = 0; str[i] != '\0'; i++)
        return i;
}

// Variabili globali: str ;
// Variabili locali "main": l;
// Variabili locali "lung_string": i;

// ------------------------------------------------------------------

/* 7.7 - Esempio di funzione "lavandino" */

#include <stdio.h>

#define DIM_INT 16

void stampa_bin (int);

int main(int argc, char const *argv[])
{
    char resp[2];
    int num;

    resp[0] = 's';


    while (resp[0] == 's')
    {
        printf ("\nInserisci un intero positivo: ");
        scanf ("%d", &num);

        printf ("La sua rappresentazione binaria e': ");

        stampa_bin (num);

        printf ("\nVuoi continuare? (s/n): ");
        scanf ("%s", resp);
    }


    printf ("\n");  
    return 0;
}

void stampa_bin (int v)
{
    char a[DIM_INT];

    int i, j;


    if (v == 0)
        printf ("%d", v);
    else
    {
        for (i = 0; v != 0; i++)
        {
            a[i] = v % 2;
            v /= 2;
        }

        for (j = i - 1; i >= 0; j--)
            printf ("%d", a[j]);
    }
}

// Variabili globali: str ;
// Variabili locali "main": resp, num;
// Variabili locali "stampa_bin": v, a, i, j;

// ------------------------------------------------------------------

/* 7.8 - Funzioni senza parametri */

#include <stdio.h>

void mess_err (void);

int main(int argc, char const *argv[])
{
    int a, b, c;


    printf ("Inserire dividendo: ");
    scanf ("%d", &a);

    printf ("Inserire divisore: ");
    scanf ("%d", &b);
    
    if (b != 0)
    {
        c = a / b;
        printf ("%d diviso %d = %d\n", a, b, c);
    }
    else
        mess_err ();


    printf ("\n");
    return 0;
}

void mess_err (void)
{
    char c;

    int i;


    for (i = 0; i <= 20; i++)
        printf ("\n");
    
    printf ("ERRORE! DENOMINATORE NULLO");

    printf ("\n Premere un tasto per continuare\n");
    scanf ("%c%c", &c, &c);
}

// Variabili globali: - ;
// Variabili locali "main": a, b, c;
// Variabili locali "stampa_bin": c, i;

// ------------------------------------------------------------------

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
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t GESTIONE SEQUENZA");
        printf("\n\n\n\t\t\t 1. Immissione");
        printf("\n\n\t\t\t 2. Ordinamento");
        printf("\n\n\t\t\t 3. Ricerca completa");
        printf("\n\n\t\t\t 4. Ricerca binaria");
        printf("\n\n\t\t\t 5. Visualizzazione");
        printf("\n\n\t\t\t 0. fine");
        printf("\n\n\n\t\t\t\t Scegliere una opzione: ");
        scanf("%d", &scelta);
        scanf("%c", &invio);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

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
        printf("\nImmettere un intero n.%d: ", i);
        scanf("%d", &vet[i]);
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

// Variabili globali: vet ;
// Variabili locali "main": - ;
// Variabili locali "gestione_sequenza": invio, n, scelta, ele, posizione;
// Variabili locali "immissione": invio, i, n;
// Variabili locali "ordinamento": n, i, p, k, n1, aux;
// Variabili locali "ricerca": n, ele, i;
// Variabili locali "ric_bin": n, ele, i, alto, basso, pos;
// Variabili locali "visualizzazione": n, invio, i;

// ------------------------------------------------------------------

// Marco Fiorillo 23/07/2021
