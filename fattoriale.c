/* fattoriale */

#include <stdio.h>

int main ()
{
    int i, fattoriale, temp;
    
    for(i = 1; i <= 5; i++)
    {
        temp = i;
        fattoriale = i;

        if (i != 1)
        {
            while(i - 1 != 0)
            {
                i--;
                fattoriale *= i;
            }
        }
        else 
            fattoriale = i;

        i = temp;

            printf("%5d", fattoriale);
  
     }
  
        return 0;

}