/* array di caratteri */

#include <stdio.h>

int main ()
{
    int i = 0;
    char stringa[] = "antonio";
    
    while (stringa[i] != '\0')
    {
        printf("%c\n", stringa[i]);
        i++;
    }

    return 0;

}