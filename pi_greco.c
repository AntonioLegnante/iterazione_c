/* approsimazione del pi_greco */

#include <stdio.h>

int main () 
{
    int i, termini; 
    double pi_greco = 0., numeratore = + 4.;

    printf("quanti termini vuoi utilizzare");
    do 
    {
        scanf("%d", &termini);
    } while(termini < 1);
 
    for (i = 0; i < termini; i++)
    {
        pi_greco += numeratore / (2. * i + 1.);
        numeratore = - numeratore;
    }

    printf("%f", pi_greco);

    return 0;

}