/* 12.1 - La struttura automobile */

/* Esempi di definizione di una struttura */

#include <stdio.h>

struct automobile
{   
    int venduto;

    char * marca;
    char * modello;
};

int main(int argc, char const *argv[])
{
    struct automobile a1;
    struct automobile a2;

    a1.marca = "FERRARI";
    a1.modello = "F40";
    a1.venduto = 200;

    a2.marca = "OPEL";
    a2.modello = "ASTRA";
    a2.venduto = 1200;

    
    printf ("Marca auto   > %s\n", a1.marca);
    printf ("Modello auto > %s\n", a1.modello);
    printf ("Vendute      > %s\n", a1.marca);

    printf ("\n");

    printf ("Marca auto   > %s\n", a2.marca);
    printf ("Modello auto > %s\n", a2.modello);
    printf ("Vendute      > %s\n", a2.marca);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
