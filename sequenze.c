/* sequenze */

#include <stdio.h>

int main ()
{
    int i, j;
    
    for (i = 1; i <= 8; i++)
        printf("%5d", i);

    printf("\n");
    
    j = 3;
   
    for (i = 0; i < 5; i++)
    {
        printf("%5d", j);
        j += 5;
    }
   
    printf("\n");
    
    j = 20; 

    for (i = 0; i < 6; i++)
    {
        printf("%5d", j);
        j -= 6;
    }

    printf("\n");
    
    j = 19;
  
    for (i = 0; i < 5; i++)
    {
        printf("%5d", j);
        j += 8;
    }

   return 0;

}