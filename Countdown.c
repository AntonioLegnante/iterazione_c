/*conto alla rovescia*/

#include <stdio.h>
#include <time.h>

int main () 
{
    struct timespec attesa;
    attesa.tv_sec = 1;
    attesa.tv_nsec = 500 * 1000 * 1000;
    int numero; 
    
    printf("inserisci un numero");
    scanf("%d", &numero);
  
    printf("tra %d secondi morirai \n", numero);

    while (numero > 0) 
    {
        printf("%d \n", numero);
        nanosleep(&attesa, NULL);
        numero--;
    }

    printf("bomba sganciata");

    return 0;

}
        
