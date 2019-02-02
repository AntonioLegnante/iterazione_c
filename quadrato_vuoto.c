/*quadrato vuoto*/
#include <stdio.h>

int main ()
{
    int lato, contatore_altezza = 0, contatore_larghezza = 0;
    do 
    {
        printf("inserisci il lato del quadrato");
        scanf("%d", &lato);
    }
    while( lato < 1 || lato > 20 );

    while (contatore_altezza < lato)
    {
        while (contatore_larghezza < lato)
        {   
            if (contatore_altezza == 0 || contatore_altezza == lato-1)
                printf("|");
            else 
                if (contatore_larghezza == 0 || contatore_larghezza == lato-1)
                    printf("|");
                else 
                    printf(" ");
                
                contatore_larghezza++;
        }
        
        printf("\n");

        contatore_larghezza = 0;
        contatore_altezza++;
     }

     return 0;

     }