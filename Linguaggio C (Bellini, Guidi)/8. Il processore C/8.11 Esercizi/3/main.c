/* 94.
    Date le macroistruzioni

        #define DIM 100;
        #define VERO (a>100);

    quale errore abbiamo probabilmente commesso nello scrivere le macroistruzioni (che comunque verranno accettate
    ed espanse dal precompilatore)? Come verrebbero espanse le seguenti istruzioni?

        1. n = DIM;
        2. float array[DIM];
        3. while VERO
        Calcola();

    In quale caso si avrà un errore in fase di compilazione? In quale caso un effetto indesiderato? E in quale tutto andrà
    bene ma avrà luogo un effetto ininfluente ma probabilmente non previsto?
*/

#define DIM 100;        /* le direttive del preprocessore non vanno terminate dal ";" */
#define VERO (a>100);   /* non vanno utilizzate variabili nelle operazioni delle macro */

1. n = DIM;             /* n = 100 */           /* errore in fase di compilazione */
2. float array[DIM];    /* float array[100] */  /* effetto non previsto */
3. while VERO           /* while (a > 100) */   /* effetto indesiderato */
    Calcola();             

int main (int argc, char const *argv[])
{

    
    printf ("\n");
    return 0;
}


// Marco Fiorillo 24/07/2021
