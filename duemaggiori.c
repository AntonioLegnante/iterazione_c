/*duemaggiori*/

#include <stdio.h>

int main () 
{
    int valore, massimo = 0, contatore = 0, massimo2 = 0;
    printf("inserisci un valore \n");
    while (contatore < 10) 
    {
        scanf("%d", &valore);
        contatore++;
        if (valore > massimo)
        {
            massimo2 = massimo;
            massimo = valore;
        }
    }
 
    printf("il massimo dei valori inseriti e' %d mentre il secondo massimo e' %d", massimo, massimo2);

    return 0;

}