/* sequenze */

#include <stdio.h>

int main ()
{
    int i;
    
    for (i = 1; i <= 8; i++)
        printf("%5d", i);

    printf("\n");
   
    for (i = 3; i <= 23; i += 5)
        printf("%5d", i);    
   
    printf("\n");

    for (i = 20; i >= -10; i -= 6)
        printf("%5d", i);

    printf("\n");
    
    for (i = 19; i <= 51; i += 8)
        printf("%5d", i);

   return 0;

}