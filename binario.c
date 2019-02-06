/*conversione binaria*/

#include <stdio.h>

int main () 
{
    int binario, lavoro, sentinella = 1, cifre[100], i = 0, decimale, j, controllo;
    
    printf("inserisci un numero binario");
    do 
    {
        scanf("%d", &binario);
        lavoro = binario;
        while (lavoro != 0 && sentinella)
        {
            controllo = lavoro % 10;
            if (controllo != 1 && controllo != 0)
                lavoro /= 10;
            else 
                sentinella = 0;
        }
    }while(!sentinella);
    
    while(binario > 0)
    {
        cifre[i] = binario % 10;
        binario /= 10;
        i++;
    }
   
    if (cifre[0] == 1)
        decimale = 1;
   
    for (j = 1; j < i; j++)
    {
        if (cifre[i] == 1)
            decimale += 2 * j;
    }

    printf("la conversione e' %d", decimale);

    return 0;

}
        
        
 
    