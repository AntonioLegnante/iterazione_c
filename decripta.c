/* descriptazione in corso */

#include <stdio.h>
#include <time.h>

int main ()
{
   
    int cifra1, cifra2, cifra3, cifra4, temp, criptato, decriptato;
    struct timespec attesa;
    attesa.tv_sec = 1;
    attesa.tv_nsec = 500 * 1000 * 1000;

    printf("inserisci il numero da decriptare");
    
    do
    {
    
    scanf("%d", &criptato);
 
    }while(criptato < 999 || criptato > 9999);
    
    printf("decriptazione in corso! attendere: \n");
    
    nanosleep(&attesa, NULL);
    cifra1 = criptato % 10;
    criptato /= 10;
 
    cifra2 = criptato % 10;
    criptato /= 10; 
   
    cifra3 = criptato % 10;
    criptato /= 10;

    cifra4 = criptato % 10;
  
    temp = cifra1;
    cifra1 = cifra3;
    cifra3 = temp;

    temp = cifra2;
    cifra2 = cifra4;
    cifra4 = temp;

    cifra1 += 3;
    cifra1 %= 10;
    cifra2 += 3; 
    cifra2 %= 10;
    cifra3 += 3;
    cifra3 %= 10;
    cifra4 += 3;
    cifra4 %= 10; 

    decriptato = cifra4 * 1000 + cifra3 * 100 + cifra2 * 10 + cifra1 ;

    printf("decriptamento completato \n%d", decriptato);

    return 0;

}




