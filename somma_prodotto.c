/*somma prodotto*/

#include <stdio.h>

int main ()
{
    int i, prodotto = 1, somma = 0;
 
    for (i = 1; i <= 15; i += 2)
        prodotto *= i;
    
    for (i = 2; i <= 30; i += 2)
        somma += i;
   
    printf("la somma dei valori compresi tra 2 e 30 e' %d mentre il prodotto dei valori compresi tra 1 e 15 e' %d", somma, prodotto);

    return 0;

}
    
            