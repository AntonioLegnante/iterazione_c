/*codice criptato*/

#include <stdio.h>

int main () 
{
    int numero, cifra1, cifra2, cifra3, cifra4, criptato, temp; 
   
    printf("inserisci un numero che sia di 4 cifre");

    do 
    {
        scanf("%d", &numero);
    
    }while(numero < 999 || numero > 9999);

    cifra1 = numero % 10;
    cifra1 += 7;
    cifra1 %= 10;
    numero /= 10;

    cifra2 = numero % 10;
    cifra2 += 7;
    cifra2 %= 10;
    numero /= 10;

    cifra3 = numero % 10;
    cifra3 += 7;
    cifra3 %= 10;
    numero /= 10;

    cifra4 = numero % 10;
    cifra4 += 7;
    cifra4 %= 10;
    numero /= 10;

    temp = cifra1;
    cifra1 = cifra3;
    cifra3 = temp;

    temp = cifra2;
    cifra2 = cifra4;
    cifra4 = temp;

    criptato = cifra4 * 1000 + cifra3 * 100 + cifra2 * 10 + cifra1 ;
    
    printf("numero criptato %d", criptato);
  
    return 0;

}
   

    
