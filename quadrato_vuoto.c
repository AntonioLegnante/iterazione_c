/*quadrato vuoto*/
#include <stdio.h>

int main ()
{
    int lato, contatore_altezza, contatore_larghezza;
    do 
    {
        printf("inserisci il lato del quadrato");
        scanf("%d", &lato);
    }
    while( lato < 1 || lato > 20 );
    
    contatore_larghezza = 0;

    while (contatore_larghezza < lato)
    {
        putchar('|');
        contatore_larghezza++;
    }
 
    contatore_altezza = 1;

    while (contatore_altezza < lato-1)
    {
        printf("\n");
        
        putchar('|');
        
        contatore_larghezza = 1;
       
        while (contatore_larghezza < lato-1)
        {
            putchar(' ');
            contatore_larghezza++;
        }
        contatore_altezza++;
        
        putchar('|');
    }
    
    printf("\n");
    contatore_larghezza = 0;

    while (contatore_larghezza < lato)
    {
        putchar('|');
        contatore_larghezza++;
    }
 
    return 0;

}