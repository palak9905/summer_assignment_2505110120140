#include <stdio.h>

int main()
{
    int num, temp, rem, sum = 0, i, fact;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    
    while(temp != 0)
    {
        rem = temp % 10;
        
        // factorial nikal rahe
        fact = 1;
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        
        sum = sum + fact;
        temp = temp / 10;
    }
    
    if(sum == num)
        printf("%d is Strong number", num);
    else
        printf("%d is not Strong number", num);
        
    return 0;
}