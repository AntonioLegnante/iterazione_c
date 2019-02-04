/*calcolo del raggio del cerchio*/

#include <stdio.h>

int main () 
{
    double pi = 3.14, raggio;
    
    printf("inserisci il raggio che sia un valore positivo");
    do 
    {
       scanf("%lf", &raggio);
    }
    while(raggio < 0.0);
    
    printf("il diametro e' %f \n", raggio * 2.0);
    printf("la circonferenza e' %f \n", raggio * 2.0 * pi);
    printf("la superficie e' %f \n", pi * raggio * raggio);
    
    return 0;

}