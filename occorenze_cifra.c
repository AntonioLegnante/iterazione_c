/*ricorrenza della cifra 7 nel numero inserito in input"*/

#include <stdio.h>

int main ()
{
    int numero, contatore = 0, cifra;

    printf("inserisci un numero che sia positivo");
    do 
        scanf("%d", &numero);
    while(numero < 0);
   
    while(numero > 0)
    {
        cifra = numero % 10;
        
        if (cifra == 7)
            contatore++;
        
        numero/= 10;
    }

    printf("sono presenti %d cifre 7", contatore);
    
    return 0;

}    