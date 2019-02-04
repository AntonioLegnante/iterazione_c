/*stampa di un quadrato*/

#include <stdio.h>

int main ()
{
    int lato, contatore_altezza, contatore_larghezza;
    
    printf("inserisci il lato che sia compreso tra 1 e 20 \n");
    do 
    {
        scanf("%d", &lato);
    }
    while (lato < 1 || lato > 20);
    
    contatore_altezza = 0;

    while (contatore_altezza < lato)
    {   
        
        contatore_larghezza = 0;

        while (contatore_larghezza < lato)
        {
            putchar('|');
            contatore_larghezza++;
        }
        
        putchar('\n');

        contatore_altezza++;
    
    }

    return 0;

}
     