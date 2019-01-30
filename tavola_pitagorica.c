/*tavola pitagorica*/

#include <stdio.h>

int main () 
{
    int riga = 1, colonna = 0;
    
    while (riga < 12)
    {
        while (colonna < 12)
        {
            colonna++;
            printf("%4d", riga * colonna);
        }
        riga++;
        colonna = 0;
      
        printf("\n");
       
    }
    
    return 0;

}