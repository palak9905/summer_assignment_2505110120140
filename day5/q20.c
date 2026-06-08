#include <stdio.h>

int main()
{
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // 2 se divide karte raho
    while(num % 2 == 0)
    {
        num = num / 2;
    }
    
    // 3 se start karke odd numbers se check karo
    for(i = 3; i <= num; i = i + 2)
    {
        while(num % i == 0)
        {
            num = num / i;
        }
    }
    
    // agar num 2 se bada bacha hai to wahi largest hai
    if(num > 2)
        printf("Largest prime factor = %d", num);
    else
        printf("Largest prime factor = 2");
        
    return 0;
}