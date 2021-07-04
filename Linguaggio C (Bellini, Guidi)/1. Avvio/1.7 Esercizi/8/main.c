/* 8.
    Indicare tutti gli errori commessi nel seguente listato 
*/

#include <stdio.h>

/* Tutto Sbagliato!!! */            /* Formalmente i commenti si inseriscono prima delle direttive include
                                        , inoltre si potrebbe usare il comando per il commento monolinea  // 
                                                                                                            */
#define BASE 3                      
#define ALTEZZA                     /* nessun valore e'assegnato a questa macro */
main()                              /* questa non e'la corretta definizione di main, inoltre manca la parentesi graffa del blocco della funzione */
    area int;                       /* la dichiarazione di una variabile segue la sintassi "tipo nome" e non "nome tipo" */
    area = BASE x ALTEZZA;          /* l'operatore per la moltiplicazione e' *, x viene identificata come una variabile in questo modo */
    printf("Base: d\n", BASE);      /* lo specificatore di formato e' caratterizzato dal %, qui assente */
    printf("Altezza: %d\n", ALTEZZA)/* un'istruzione in C deve essere terminata dal ; */
    printf("Area: %d\n"; area);     /* i parametri di una funzione devono essere passati tra virgole, non tramite ; */
}
// Marco Fiorillo 4/07/2021
