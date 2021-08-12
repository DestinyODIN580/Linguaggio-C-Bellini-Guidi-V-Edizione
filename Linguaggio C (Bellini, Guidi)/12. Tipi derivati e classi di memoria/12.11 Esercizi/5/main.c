/* 126.
    Interpretare le seguenti dichiarazioni:

        1 long *pony(long, long);
        2 long (*dog)(long, long);
        3 struct cat
          {
            int a;
            char b;
          } (*dog[5]) (struct cat, struct cat);
        4 double (*mpuse(double(*)[3]))[3];
        5 union rabbit
          {
            int x;
            unsigned y;
          } **frog[5][5];
        6 union rabbit *(*frog[5])[5];
*/

#include <stdio.h>

long *pony (long, long);            // ritorna un valore di tipo puntatore a long

long (*dog)(long, long);            // puntatore a una funzione

struct cat                          // struttura
{
    int a;
    char b;
} (*dog[5]) (struct cat, struct cat);

double (*mpuse(double(*)[3]))[3];   // richiamo di una funzione tramite struct

union rabbit                        // struttura di bit
{
    int x;
    unsigned y;
} **frog[5][5];

union rabbit *(*frog[5])[5];        // richiamo di una funzione tramite struct


int main (int argc, char const *argv[])
{


    printf ("\n");
    return 0;
}
// Marco Fiorillo 11/08/2021
