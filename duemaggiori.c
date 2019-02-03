/*duemaggiori*/

#include <stdio.h>

int main () 
{
    int valore, massimo, contatore = 0, massimo2, temporanea, valore2;
    printf("inserisci un valore \n");
    scanf("%d",&valore);
    scanf("%d",&valore2);

    if (valore > valore2)
    {
        massimo = valore;
        massimo2 = valore2;
    }
    
    else 
    {
        massimo = valore2;
        massimo2 = valore;
    }
    
    while (contatore < 8) 
    {
        scanf("%d", &valore);
        contatore++;

        if (valore > massimo)
        {
            massimo2 = massimo;
            massimo = valore;
        }

        else if (valore > massimo2)
            massimo2 = valore;
    }
 
    printf("il massimo dei valori inseriti e' %d mentre il secondo massimo e' %d", massimo, massimo2);

    return 0;

}