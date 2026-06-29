#include <stdio.h>
int main()
{
    int ch;
    float a,b;
    printf("1.add\n2.subtract\n3.multiply\n4.divide\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    printf("Enter two  numbers: ");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
        case 1:
        printf("result=%.2f",a+b);
        break;
        case 2:
        printf("result=%.2f",a-b);
        break;
        case 3:
        printf("result=%.2f",a*b);
        break;
        case 4:
        if(b!=0)
        printf("result=%.2f",a/b);
        else
        printf("division not possible");
        break;
        default:
        printf("Invalid choice");
    }
    return 0;
}