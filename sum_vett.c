/* uso dei vettori */

#include <stdio.h>

int main ()
{
    int somma = 0, i, vett[10];
    double media;
    
    printf("inserisci gli elementi 10 elementi");
    for (i = 0; i < 10; i++)
    {
        scanf("%d\n", &vett[i]);
        somma += vett[i];
    }
   
    media = (double)somma / 10.; 
    
    for (i = 0; i < 10; i++)
        printf("%d\n", vett[i]);

    printf("%d\n%f", somma, media);
    
    return 0;

}