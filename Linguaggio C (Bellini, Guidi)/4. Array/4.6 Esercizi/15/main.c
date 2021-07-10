/* 50.
	Memorizzare in un array tridimensionale i numeri estratti al gioco del lotto
	su tutte le ruote per dieci estrazioni consecutive. Verificare su quali
	route e in quali estrazioni si ripete un certo numero passato in ingresso
	dall'utente.
*/

#include <stdio.h>

#define ETN 10
#define MAXMT 20
#define TOP 100

int main (int argc, char *argv[])
{
	int i, j, k, p;					/* contatori */
	int out;						/* flag */
	int len;						/* lunghezza di vet */
	int nums;						/* numeri dell'estrazione */
	int whl;						/* numero della ruota */	
	int mat [MAXMT][MAXMT][ETN];	/* matrice con i dati */
	int vet[TOP];					/* vettore con i dati unici */
	
	
	/* assegnazione di nums */
	printf ("Inserire quanti numeri vengono estratti [i] > ");
	scanf ("%d", &nums);
	
	/* assegnazione di whl */
	printf ("Inserire quante ruote ci sono [j] > ");
	scanf ("%d", &whl);
	
	/* costruzione di mat */
	for (i = 0; i < ETN; i++)
		for (j = 0; j < whl; j++)
			for (k = 0; k < nums; k++)
			{
				printf ("\n(%d; %d; %d) -- Num [%d] Ruota [%d] Estr [%d] > ",k, j, i, k + 1, j + 1, i + 1);
				scanf ("%d", &mat[k][j][i]);
			}
	
	/* costruzione di vet (ricerca in mat dei valori unici) */
	for (i = 0, len = 1, vet[0] = mat[0][0][0]; i < ETN; i++)
		for (j = 0; j < whl; j++)
			for (k = 0; k < nums; k++)
			{
				out = 0;
				for (p = 0; p < len; p++)
					if (vet[p] == mat[k][j][i])
						out = 1;
				if (!out)
					vet[len++] = mat[k][j][i];		
			}
	
	/* esito */
	for (p = 0; p < len; p++)
		for (i = 0; i < ETN; i++)
			for (j = 0; j < whl; j++)
				for (k = 0; k < nums; k++)
					if (vet[p] == mat[k][j][i])
						printf ("\n\nNumero [%d] trovato a coordinate (%d; %d; %d)", vet[p], k, j, i); 
	
	/* stampa di vet */
	printf ("\n\nElementi singoli estratti > [ ");
	for (i = 0; i < len; i++)
		printf ("%d ", vet[i]);
	printf ("];\n\n");
	
	/* stampa di mat */
	for (i = 0; i < ETN; i++)
	{
		printf ("\n");
		for (j = 0; j < whl; j++)
		{
			printf ("\{ "); 
			for (k = 0; k < nums; k++)
				printf ("%d ", mat[k][j][i]);			
			printf ("};\n");
		}	
	}
	
			
	printf ("\n");
	return 0;
}
// Marco Fiorillo 10/07/2021
