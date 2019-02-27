/*algoritmo impossibile*/

#include <stdio.h>

int main ()
{
    int i, j, pesobin, pesoh, bit, temp, pesoexa;


    for (i = 0; i <= 255; i++)
    {
        pesobin = 128;
        temp = i;
        for (j = 0; j < 8; j++)
        {
            bit = temp / pesobin;
            temp -= bit * pesobin; 
            printf("%d", bit);
            pesobin = pesobin / 2;
        }
        printf("\t");

        pesoh = 64;
        temp = i;
        for (j = 0; j < 3; j++)
        {
            bit = temp / pesoh;
            temp -= bit * pesoh; 
            printf("%d", bit);
            pesoh = pesoh / 8;
        }

               printf("\t");

        pesoexa = 16;
        temp = i;
        for (j = 0; j < 2; j++)
        {
            bit = temp / pesoexa;
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

            temp -= bit * pesoexa; 
            pesoexa = pesoexa / 16;
        }
        printf("\n");
    }
       return 0;
}