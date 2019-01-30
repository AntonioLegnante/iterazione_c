/*massimo tra 2 numeri*/

#include <stdio.h>

int main () 
{
    int valore, massimo = 0, contatore = 0;
    printf("inserisci un valore \n");
    while (contatore < 10) 
    {
        scanf("%d", &valore);
        contatore++;
        if (valore > massimo)
            massimo  = valore;
    }
 
    printf("il massimo dei valori inseriti e' %d", massimo);

    return 0;

}