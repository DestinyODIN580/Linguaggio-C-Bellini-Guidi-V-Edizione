/* 116.
    Verificare con un apposito programma quale dei seguenti valori assume la variabile c di tipo char se durante
    l’esecuzione di una scanf("%d", &c) vengono immessi dall’utente i valori 300: 300, 44 o 6. Sapreste motivare il
    risultato? Quale valore assume c se vengono immessi 257, 256 o 255?    
*/

/* esito 
    300 > 300
    char = ,        // overflow  
    int = 44        // 255 = -1 >> 300 = 44

    44 > 44
    char = ,        // carattere 44 ASCII (,)
    int = 44        

    6 > 6
    char =          // carattere 6 ASCII 
    int = 6

    257 > 257       
    char =          // overflow
    int = 1         // 255 = -1 >> 257 = 1

    256 > 256
    char =          // overflow
    int = 0         // 255 = -1 >> 256 = 0

    255 > 255
    char = �        // carattere 255 ASCII
    int = -1        // a55 = -1
    *** stack smashing detected ***: terminated
    Annullato (core dump creato)

*/

#include <stdio.h>

int main (int argc, char const *argv[])
{
    char c;     /* variabile per i test */


    /* inserimento di 300 */
    printf ("300 > ");
    scanf ("%d", &c);
    printf ("char = %c\nint = %d\n", c, c);

    /* inserimento di 44 */
    printf ("44 > ");
    scanf ("%d", &c);
    printf ("char = %c\nint = %d\n", c, c);

    /* inserimento di 6 */
    printf ("6 > ");
    scanf ("%d", &c);
    printf ("char = %c\nint = %d\n", c, c);

    /* inserimento di 257 */
    printf ("257 > ");
    scanf ("%d", &c);
    printf ("char = %c\nint = %d\n", c, c);

    /* inserimento di 256 */
    printf ("256 > ");
    scanf ("%d", &c);
    printf ("char = %c\nint = %d\n", c, c);

    /* inserimento di 255 */
    printf ("255 > ");
    scanf ("%d", &c);
    printf ("char = %c\nint = %d\n", c, c);


    printf ("\n");
    return 0;
}
// Marco Fiorillo 30/07/2021
