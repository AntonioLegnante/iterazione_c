/*individuare se un numero è palindromo*/

#include <stdio.h>

int main () 
{
    int numero, cifra1, cifra2, cifra4, cifra5; 
    
    printf("inserisci un valore intero da 5 cifre");
    do 
    {
        scanf("%d", &numero);

    } while(numero < 9999 || numero > 99999);
     
    cifra5 = numero % 10;
    numero /= 10;
   
    cifra4 = numero % 10;
    numero /= 100;

    cifra2 = numero % 10;
    numero /= 10;

    cifra1 = numero % 10;

    if (cifra5 == cifra1 && cifra2 == cifra4)
        printf("il numero e' palindromo");
    else 
        printf("il numero non e' palindromo");
  
    return 0;
    
}
        
  
    