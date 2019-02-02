/*massimo tra 2 numeri*/

#include <stdio.h>

int main () 
{
    int valore, massimo, contatore = 0;
    printf("inserisci 10 valori \n");
    scanf("%d", &valore);
    
    massimo = valore;
    while (contatore < 9) 
    {
        scanf("%d", &valore);
        contatore++;
        if (valore > massimo)
            massimo = valore;
    }
 
    printf("il massimo dei valori inseriti e' %d", massimo);

    return 0;

}