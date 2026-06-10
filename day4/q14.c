#include <stdio.h>

int main()
{
    int n;
    int a = 0, b = 1, c;
    
    printf("Enter which term you want: ");
    scanf("%d", &n);
    
    if(n == 1) {
        printf("Answer = %d", a);
    }
    else if(n == 2) {
        printf("Answer = %d", b);
    }
    else {
        for(int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Answer = %d", b);
    }
    
    return 0;
}