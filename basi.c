/*algoritmo impossibile*/

#include <stdio.h>

int main ()
{
    int i, j, peso, bit, temp;


    for (i = 0; i <= 255; i++)
    {
        printf("%3d\t", i);
  
        peso = 128;
        temp = i;
        for (j = 0; j < 8; j++)
        {
            bit = temp / peso;
            temp -= bit * peso; 
            printf("%d", bit);
            peso = peso / 2;
        }
        printf("\t");

        peso = 64;
        temp = i;
        for (j = 0; j < 3; j++)
        {
            bit = temp / peso;
            temp -= bit * peso; 
            printf("%d", bit);
            peso = peso / 8;
        }

               printf("\t");

        peso = 16;
        temp = i;
        for (j = 0; j < 2; j++)
        {
            bit = temp / peso;
            switch(bit) 
            {
                case 10:
                    printf("A");
                break;

                case 11:
                    printf("B");
                break;

                case 12:
                    printf("C");
                break;

                case 13:
                    printf("D");
                break;

                case 14:
                    printf("E");
                break;

                case 15:
                    printf("F");
                break;

                default:
                    printf("%d", bit);
                break;
            }

            temp -= bit * peso; 
            peso = peso / 16;
        }
        printf("\n");
    }
       return 0;
}