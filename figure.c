/* stampa di alcuni triangoli con i cicli for */

#include <stdio.h>

int main ()
{
    int i, j, z, spazi, caratteri;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)    putchar('*');
        printf("\n");
    }

    for (i = 10; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)    putchar('*');
        printf("\n");
    }

    for (i = 10; i >= 1; i--)
    {
        spazi = 10 - i;
        caratteri = i;
 
        for (j = 1; j <= spazi; j++)    putchar(' ');
        for (z = 1; z <= caratteri; z++)    putchar('*'); 
        printf("\n");
        
    }

   
    for (i = 1; i <= 10; i++)
    {
        spazi = 10 - i;
        caratteri = i;
 
        for (j = 1; j <= spazi; j++)    putchar(' ');
        for (z = 1; z <= caratteri; z++)    putchar('*'); 
        printf("\n");
        
    }


     

    return 0;

}
