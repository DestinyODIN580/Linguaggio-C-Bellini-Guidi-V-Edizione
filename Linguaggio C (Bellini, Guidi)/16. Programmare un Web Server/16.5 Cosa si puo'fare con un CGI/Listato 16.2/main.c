/* 16.2 - CGI che trasmette l’ora esatta */

/* Ora esatta (o quasi) */

#include <stdio.h>
#include <time.h>

int main (int argc, char *argv[])
{
    /* Si dichiarano due variabili per memorizzare l'ora */
    time_t bintime;
    struct tm *curtime;


    printf("Content-type: text/html\n\n");
    printf("<head>\n");
    printf("<title>Ora (quasi) Esatta</title>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("<h1>\n");

    time(&bintime);
    curtime = localtime(&bintime);

    printf("Ora (quasi) esatta: %s\n", asctime(curtime));
    printf("</h1>\n");
    printf("</body>\n");


    return 0;
}
// Marco Fiorilllo 21/10/2021
