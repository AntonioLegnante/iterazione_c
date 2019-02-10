/* fattoriale */

#include <stdio.h>

int main ()
{
    int i, fattoriale = 1;
    
    for(i = 1; i <= 5; i++)
    {
        fattoriale *= i;
        printf("%5d", fattoriale);
    }
  
    return 0;

}