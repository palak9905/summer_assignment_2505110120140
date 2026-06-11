#include<stdio.h>
int findsum(int a,int b);
int main()
{
    int n1,n2,total;
    printf("Enter first number");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);

    total=findsum(n1,n2);
    printf("The sum is %d\n",total);
    return 0;
}
int findsum(int a,int b)
{
    int result;
    result=a+b;
    return result;
}