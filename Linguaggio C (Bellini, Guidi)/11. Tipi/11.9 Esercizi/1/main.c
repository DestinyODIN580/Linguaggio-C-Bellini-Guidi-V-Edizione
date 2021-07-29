/* 115.
    Verificare con un apposito programma quale dei seguenti valori assume la variabile i di tipo short int se
    durante l’esecuzione di una scanf("%d", &i) vengono immessi dall’utente i valori 32768 e 32769. E se i è di tipo
    int? Le risposte date sono assolute o possono variare, e perché?    
*/

/*  esito  
    Cio'che accade e'un fenomeno di "overflow", ovvero il valore da contenere occupa piu'bit di quanti ne potrebbe
    contenere la variabile (per short int il numero e'(2^8)^2) e cio'che accade e'che da 11111.... il conteggio riparte da
    00....1. A seconda della macchina piu avvenire o meno l overflow, in quanto la dimensione allocata alle variabili short
    int e'relativa, anche se e'generalmente di 2 byte */


#include <stdio.h>

int main(int argc, char const *argv[])
{
    short i;    /* variabile di test 1 */

    int i2;     /* variabile di test 2 */

    
    /* inserimento di 32768 per short int */
    printf ("32768 >> ");
    scanf ("%hd", &i);
    printf (">> %hd\n", i);

    /* inserimento di 32769 per short int */
    printf ("32769 >> ");
    scanf ("%hd", &i);
    printf (">> %hd\n", i);

    /* inserimento di 32768 per int */
    printf ("32768 >> ");
    scanf ("%d", &i2);
    printf ("%d\n", i2);

    /* inserimento di 32769 per int */
    printf ("32769 >> ");
    scanf ("%d", &i2);
    printf ("%d\n", i2);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
