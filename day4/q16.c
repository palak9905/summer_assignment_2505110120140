#include <stdio.h>

int main()
{
    int i, a, b, c, sum;
    
    printf("Armstrong numbers from 1 to 500: ");
    
    for(i = 1; i <= 500; i++)
    {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        
        sum = (a*a*a) + (b*b*b) + (c*c*c);
        
        if(sum == i)
            printf("%d ", i);
    }
    
    return 0;
}