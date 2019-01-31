/*stampa di un quadrato*/

#include <stdio.h>

int main ()
{
    int lato, contatore_altezza = 0, contatore_larghezza = 0;
    
    printf("inserisci il lato che sia compreso tra 1 e 20 \n");
    do 
        scanf("%d", &lato);
        while (lato < 1 || lato > 20);
    
    while (contatore_altezza < lato)
    {
        while (contatore_larghezza < lato)
        {
            printf("|");
            contatore_larghezza++;
        }
        
        printf("\n");

        contatore_larghezza = 0;
        contatore_altezza++;
    
    }

    return 0;

}
     