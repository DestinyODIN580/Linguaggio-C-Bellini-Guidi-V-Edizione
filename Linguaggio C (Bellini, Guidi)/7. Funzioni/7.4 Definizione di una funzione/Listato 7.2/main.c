/* 7.2 - Dichiarazioni e definizioni di funzioni */

#include <stdio.h>

double quad (float);
double cubo (float);
double quar (float);
double quin (float);
double pote (float, int);

int main (int argc, char const *argv[])
{
    int base, esponente;

    double ptnz;


    printf ("Inserire base: ");
    scanf ("%d", &base);
    printf ("Inserire esponente (0-5): ");
    scanf ("%d", &esponente);

    ptnz = pote (base, esponente);

    if (ptnz == -1)
        printf ("Potenza non prevista\n");
    else    
        printf ("La potenza di %d di %d e'%f\n", esponente, base, ptnz);
    

    printf ("\n");
    return 0;
}

double quad (float c)
{
    return (c * c);
}

double cubo (float c)
{
    return (c * c * c);
}

double quar (float c)
{
    return (c * c * c * c);
}

double quin (float c)
{
    return (c * c * c * c * c);
}

double pote (float b, int e)
{
    switch (e)
    {
        case (0):
            return (1);
            break;

        case (1):
            return (b);
            break;

        case (2):
            return (quad (b));
            break;

        case (3):
            return (cubo (b));
            break;

        case (4):
            return (quar (b));
            break;

        case (5):
            return (quin (b));
            break;
        
        default:
            return (-1);
            break;
    }

}
// Marco Fiorillo 19/07/2021
