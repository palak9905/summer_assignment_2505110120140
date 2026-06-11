#include <stdio.h>
int reverse(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);

    printf("The reverse of number =%d",reverse(n));
    return 0;
}
int reverse(int n)
{
    static int rev =0;
    if(n==0)
    return rev;
    else
    {
        rev = (rev*10)+(n%10);
        return reverse(n/10);
    }
}