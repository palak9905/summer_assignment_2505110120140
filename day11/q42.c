#include <stdio.h>
int findmax(int num1,int num2);
int main()
{
    int n1,n2,max;
    printf("Enter the first number");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);
    max=findmax(n1,n2);
    printf("The maximum number is %d",max);
    return 0;
}
int findmax(int num1,int num2)
{
    if(num1>num2)
    {
      return num1;
    }
    else
    {
        return num2;
    }
}