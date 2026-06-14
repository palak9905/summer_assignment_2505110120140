#include <stdio.h>

int main()
{
    int i, n, j;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements in the array are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])    // searching for duplicate elements
            {
                printf("%d ", a[i]);  // print duplicate element
                break;                // avoid printing same element multiple times
            }
        }
    }

    return 0;
}