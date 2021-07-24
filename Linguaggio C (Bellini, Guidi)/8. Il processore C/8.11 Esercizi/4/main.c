/* 95.
    Supponiamo che PIPPO sia una macro già definita:
        
        #if PIPPO == 100
            #undef PIPPO
            #define PIPPO 0
        #if PIPPO == 200
            #undef PIPPO
            #define PIPPO 300
        #else
            #define PLUTO 1000
        #endif

Quali azioni vengono intraprese in dipendenza del valore iniziale di PIPPO? Quale differenze possiamo notare tra le
istruzioni condizionali del preprocessore e le istruzioni condizionali del linguaggio C?
*/

/* PIPPO == 100 >> PIPPO = 0 */
/* PIPPO == 200 >> PIPPO = 300 */
/* PIPPO != 100 && PIPPO != 200 >> PIPPO = PIPPO, PLUTO = 1000 */

/* la differenza e'che le condizioni vengono esaminate prima della compilazione quindi il valore verra
    selezionato prima delle sue applicazioni nel programma. Le istruzioni sono inoltre piu veloci e non
    occupano spazion in memoria */


int main (int argc, char const *argv[])
{
    
    return 0;
}
// Marco Fiorillo 24/07/2021
