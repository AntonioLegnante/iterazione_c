/*contare ogni 3 numeri*/

#include <stdio.h>

int main () 
{
    int contatore = 0, numero;
  
    printf("inserisci un numero");
    scanf("%d", &numero);
   
    while (contatore < 5)
    {
        numero += 3;
        printf("%d \n", numero);
        contatore++;
    }
  
    return 0;

}
