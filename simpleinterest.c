#include <stdio.h>
int main()
{
    float principle;
    float rate;
    float time;
    printf("Enter the principle amount\n");
    scanf("%f",&principle);
    printf("Enter the rate\n");
    scanf("%f",&rate);
    printf("Enter the time\n");
    scanf("%f",&time);
    printf("The simple interest is %f\n",principle*rate*time/100);
    return 0;

}