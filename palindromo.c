/*individuare se un numero è palindromo*/

#include <stdio.h>

int main () 
{
    int numero, cifre[4], i = 0; 
    
    printf("inserisci un valore intero da 5 cifre");
    do 
    {
        scanf("%d", &numero);

    } while(numero < 9999 || numero > 99999);
     
    while (i < 4)
    {
        if (numero < 99 || numero > 999)
        {
            cifre[i] = numero % 10;
            numero /= 10;
            i++;
        }
        else 
            numero /= 10;
    }
    
    
    if (cifre[0] == cifre[3] && cifre[1] == cifre[2])
        printf("il numero e' palindromo");
    else 
        printf("il numero non e' palindromo");
  
    return 0;
    
}
        
  
    