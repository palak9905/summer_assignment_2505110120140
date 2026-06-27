#include <stdio.h>
int main()
{
    float basic,hra,da,total;
    printf("Enter basic salary: ");
    scanf("%f",&basic);
    hra=basic*0.20;
    da=basic*0.10;
    total=basic+hra+da;
    printf("Total salary=%.2f",total);
    return 0;
}