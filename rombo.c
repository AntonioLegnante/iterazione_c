/* rappresentazione di un rombo */

#include <stdio.h>

int main ()
{
   
    int caratteri, j, i, z, spazi, lato;
 
    printf("inserisci il lato del rombo che sia compreso tra 1 e 19");
    do 
    {
        scanf("%d", &lato);
    
    }while(lato < 1 || lato > 19 || lato % 2 == 0);
   
        caratteri = 1;
   
        for (i = 0; i <= lato / 2; i++)
        {
            spazi = lato / 2 - i;
            
            for (j = 0; j < spazi; j++)
                putchar(' ');
            
            for (z = 0; z < caratteri; z++)
                putchar('*');
  
           caratteri += 2;

           printf ("\n");
       }
    
        caratteri = lato - 2;
   
        for (i = 1; i <= lato / 2; i++)
        {
            spazi = i;
            
            for (j = 0; j < spazi; j++)
                putchar(' ');
            
            for (z = 0; z < caratteri; z++)
                putchar('*');
  
           caratteri -= 2;

           printf ("\n");
       }

       
 return 0;
}     
    