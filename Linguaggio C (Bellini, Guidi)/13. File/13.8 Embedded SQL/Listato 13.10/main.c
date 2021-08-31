/* Listato 13.10 - Memorizzazione all’interno di un file di informazioni su un gruppo di alunni, inserite da tastiera */

/* Esempio di Embedded SQL */

exec sql include sqlca;

int main (int argc, char const argv *[])
{
    /* Dichiarazione delle variabili */
    exec sql begin declare section;
    CS_CHAR utente[31]; password[31];
    exec sql end declare section;

    /* Inizializzazione del sottoprogramma che
    gestisce gli errori SQL */

    exec sql whenever sqlerror perform err_p();

    /* Avvia la connessione con il server SQL */

    printf ("\nInserisca l’identificativo utente ");
    gets (utente);
    printf ("\npassword ");
    gets (password);
    exec sql connect :user identified by :password;
    
    /* Esempio di esecuzione di un comando SQL */
    exec sql update auto set prezzo = prezzo *1.10;

    /* Chiude la connessione con il server SQL */
    exec sql disconnect;


    printf ("\n");
    return 0;
}
/* Sottoprogramma che gestisce gli errori SQL */
err_p()
{
    /* Stampa il codice di errore, un messaggio e il
    numero di linea dove si è prodotto l’errore */

    printf("\nerrore nella linea %d, codice errore %d.\ns"
    sqlca.sqlcode, sqlca.sqlerrm, sqlerrmc);
}
// Marco Fiorillo 31/08/2021
