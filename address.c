/* address */ 

#include <stdio.h>

int main ()
{
    int vett [10], i;
    int *indirizzo;

    for (i = 0; i < 10; i++)
    {
        indirizzo = &vett[i];
        printf("%p\n", (void *)indirizzo);
    }
    
    return 0;
}
/*puntatori generici trattati come puntatori void