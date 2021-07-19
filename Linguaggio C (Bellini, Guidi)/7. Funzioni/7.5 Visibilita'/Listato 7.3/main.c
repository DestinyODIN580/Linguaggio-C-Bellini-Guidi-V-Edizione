/* 7.3 - Esemplificazione di mascheramento dei nomi */

int x;                  /* nome globale */

f ()
{
    int x;              /* x locale che nasconde la x globale */
    x = 1;              /* assegna 1 a x locale */

    {
        int x;          /* nasconde il primo x locale */
        x = 2;          /* assegna 2 al secondo x locale */
    }

    x = 3;              /* assegna 3 al primo x locale */
}

scanf ("%d", &x);   

// Marco Fiorillo 19/07/2021