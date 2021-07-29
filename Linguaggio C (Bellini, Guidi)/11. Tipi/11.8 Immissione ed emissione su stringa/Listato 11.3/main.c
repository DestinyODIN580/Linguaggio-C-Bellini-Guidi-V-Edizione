/* 11.3 - Esempio di uso sscanf */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buf[31];
    char nome[31];

    double valore;


    printf ("Inserire una variabile nel formato \"nome = <valore>\" ");
    gets (buf);

    /* Con sscanf () si separano il nome del valore */

    sscanf (buf, " %[^=] = %lf", nome, &valore);

    printf ("La variabile %s vale %f\n", nome, valore);


    printf ("\n");
    return 0;
}
//