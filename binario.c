/*conversione binaria*/

#include <stdio.h>

int main () 
{
    int binario, controllobinario, sentinella, bit, decimale = 0, potenze, momentanea;
    
    printf("inserisci un numero binario");
    do
    {
        scanf("%d", &binario);
        momentanea = binario;
        sentinella = 1;

        while (momentanea > 0 && sentinella != 0)
        {
            controllobinario = momentanea % 10;
            if (controllobinario == 1 || controllobinario == 0)
                momentanea /= 10;
            else 
                sentinella = 0;
        }
     }while(sentinella == 0);
    
    potenze = 1;

    while(binario > 0)
    {
        bit = binario % 10;
        if (bit == 1)
            decimale += potenze;
        binario /= 10;
        potenze *= 2;
    }

    printf("la conversione e' %d", decimale);

    return 0;

}
        
        
 
    