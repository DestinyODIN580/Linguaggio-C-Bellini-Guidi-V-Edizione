/* 100.
    Scrivere almeno tre differenti versioni di una funzione che effettui la copia di una stringa su un’altra.
*/      

#include <stdio.h>
#include <stdlib.h>

#define LEN 100

void strcpy1 (char *, char *);              /* funzione che sovrascrive str2 con str1 */
void strcpy2 (char *, char *, int);         /* funzione che sovrascrive str2 con str1 a partire da pos */
void strcpy3 (char *, char *, int, int);    /* funzione che sovrascrive n caratteri su str2 con str1 a partire da pos */

int main (int argc, char const *argv[])
{
    int n;                                  /* numero di caratteri da copiare per strcpy3 */
    int pos;                                /* posizione di copiatura per strcpy2 e 3 */
    int c;                                  /* carattere in ingresso */
    int i;                                  /* contatore */

    char *str1;                             /* stringa 1 */
    char *str2;                             /* stringa 2 */
    char *pStr1;                            /* puntatore a str1 */
    char *pStr2;                            /* puntatore a str2 */

    i = 0;
    str1 = malloc (sizeof (char) * LEN);
    str2 = malloc (sizeof (char) * LEN);
    pStr1 = &str1[0];
    pStr2 = &str2[0];


    /* costruzione str1 */
    printf ("Stringa 1 > ");
    while ((c = getchar ()) != '\n')
        *(pStr1 + i++) = c;
    *(pStr1 + i) = '\0';

    /* costruzione str2 */
    printf ("Stringa 2 > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        *(pStr2 + i++) = c;
    *(pStr2 + i) = '\0';

    /* esito 1 */
    printf ("Stringhe inserite >> %s, %s\n", str1, str2);
    strcpy1 (pStr1, pStr2);
    printf ("strcpy1 > %s %s\n", str1, str2);

    /* costruzione str1 */
    printf ("\nStringa 1 > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        *(pStr1 + i++) = c;
    *(pStr1 + i) = '\0';

    /* costruzione str2 */
    printf ("Stringa 2 > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        *(pStr2 + i++) = c;
    *(pStr2 + i) = '\0';

    /* assegnazione pos */
    printf ("Inserisci la posizione della copiatura > ");
    scanf ("%d", &pos);
    getchar ();

    /* esito 2 */
    strcpy2 (pStr1, pStr2, pos);
    printf ("strcpy2 > %s, %s", str1, str2);

    /* costruzione str1 */
    printf ("\nStringa 1 > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        *(pStr1 + i++) = c;
    *(pStr1 + i) = '\0';

    /* costruzione str2 */
    printf ("Stringa 2 > ");
    i = 0;
    while ((c = getchar ()) != '\n')
        *(pStr2 + i++) = c;
    *(pStr2 + i) = '\0';

    /* assegnazione pos */
    printf ("Inserisci la posizione della copiatura > ");
    scanf ("%d", &pos);

    /* assegnazione n */
    printf ("Inserisci il numero di caratteri > ");
    scanf ("%d", &n);

    /* esito 3 */
    strcpy3 (pStr1, pStr2, pos, n);
    printf ("strcpy3 > %s, %s", str1, str2);


    printf ("\n");
    return 0;
}

void strcpy1 (char *str1, char *str2)
{
    int i;


    /* sovrascrittuta di str1 con str2 */
    for (i = 0; *(str2 + i) != '\0'; i++)
        *(str1 + i) = *(str2 + i);
    *(str1 + i) = '\0';


    return ;
}

void strcpy2 (char *str1, char *str2, int pos)
{
    int i;

    /* sovrascrittuta di str1 con str2 dalla posizione pos */
    for (i = 0; *(str1 + i) != '\0' || *(str2 + i) != '\0'; i++)
        *(str1 + pos + i) = *(str2 + i);

    return ;   
}

void strcpy3 (char *str1, char *str2, int pos, int n)
{
    int i;


    /* sovrascrittuta di str1 con str2 dalla posizione pos di n caratteri */
    for (i = 0; *(str1 + i) != '\0' && *(str2 + i) != '\0' && i < n; i++)
        *(str1 + pos + i) = *(str2 + i);

    return ;  
}
// Marco Fiorillo 25/07/2021
