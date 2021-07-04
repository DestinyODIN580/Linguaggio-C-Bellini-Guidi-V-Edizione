/* 22.
    Scrivere il programma che, richiesti sei numeri che rappresentano due date nel formato GG, MM, AA, determini la
    più recente.
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
    int AAtoday, MMtoday, GGtoday;  /* data odierna */
    int AA1, MM1, GG1;              /* prima data  */
    int AA2, MM2, GG2;              /* seconda data */
    int recent;
    
    recent = 0;


    /* assegnazione GGtoday, MMtoday, AAtoday */
    printf ("Inserire la data di oggi nel formato GG, MM, AA > ");
    scanf ("%d, %d, %d", &GGtoday, &MMtoday, &AAtoday);

    /* assegnazione GG1, MM1, AA1 */
    printf ("Inserire la data 1 nel formato GG, MM, AA > ");
    scanf ("%d, %d, %d", &GG1, &MM1, &AA1);

    /* assegnazione GG2, MM2, AA2 */
    printf ("Inserire la data 2 nel formato GG, MM, AA > ");
    scanf ("%d, %d, %d", &GG2, &MM2, &AA2);

    /* differenza temporale prima data */
    GG1 = abs (GG1 - GGtoday);
    MM1 = abs (MM1 - MMtoday);
    AA1 = abs (AA1 - AAtoday);

    /* differenza temporale seconda data */
    GG2 = abs (GG2 - GGtoday);
    MM2 = abs (MM2 - MMtoday);
    AA2 = abs (AA2 - AAtoday);

    /* determinazione della piu'recente */
    if (AA1 > AA2)
        recent = 2;

    else if (AA2 > AA1)
        recent = 1;

    else if (MM1 > MM2)
        recent = 2; 

    else if (MM2 > MM1)
        recent = 1;

    else if (GG1 > GG2)
        recent = 2;

    else if (GG2 > GG1)
        recent = 1;

    /* esito */
    if (recent == 1)
        printf ("La prima e'la piu'recente");

    else if (recent == 2)
        printf ("La seconda e'la piu'recente");

    else
        printf ("\nLe due dati hanno la stessa distanza temporale");


    printf ("\n");
    return 0;
}
// Marco Fiorillo 4/07/2021
