/*algoritmo impossibile*/

#include <stdio.h>

int main ()
{
    int i, j, controllo, contatore = 0;
    int bit[10];
    int a[10];
    char lettera;
    char es[10];

    for (i = 0; i <= 255; i++)
    {
        controllo = i;
        printf("%d", i);
        do 
        {
            bit[contatore] = controllo % 2;
            controllo /= 2;
            contatore++;
        }while(controllo != 0);
        
        for (j = 0; j < 8 - contatore; j++)
            printf("%d", 0);
        for (j = contatore; j >= 0; j++)
            printf("%d", bit[j]);
     
        contatore = 0;

        controllo = i;
        do
        {
            a[contatore] = controllo % 8;
            controllo /= 8;
            contatore++;
        }while(controllo != 0);
        
        for (j = 0; j < 3 - contatore; j++)
            printf("%d", 0);
        for (j = contatore; j >= 0; j++)
            printf("%d", a[j]);
 
        contatore = 0;
 
        controllo = i;
        do 
        {
            lettera = (char) controllo % 16;
            controllo /= 16;
        switch(lettera)
        {
            case 10:
            es[contatore] = 'A';
            break;
            
            case 11:
            es[contatore] = 'B';
            break;

            case 12:
            es[contatore] = 'C';
            break;
   
            case 13:
            es[contatore] = 'D';
            break;
   
            case 14:
            es[contatore] = 'E';
            break;
 
            case 15: 
            es[contatore] = 'F';
            break;
 
            default:
            es[contatore] = lettera;
            break;
        }
            contatore++;
        }while(controllo != 0);

       for (j = 0; j < 4 - contatore; j++)
           printf("%d", 0);
       for (j = contatore; j >= 0; j++)
           printf("%c", es[j]);

       printf("\n");
    }
       return 0;
}