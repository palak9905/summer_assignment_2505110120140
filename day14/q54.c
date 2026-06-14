#include <stdio.h>

int main()
{
    int i, n, ele, c = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element whose frequency is to be found : ");
    scanf("%d", &ele);

    for(i = 0; i < n; i++)
    {
        if(a[i] == ele)     // searching for the element
        {
            c++;            // increase count
        }
    }

    if(c > 0)
        printf("Frequency of %d is %d\n", ele, c);
    else
        printf("Element not found\n");

    return 0;
}