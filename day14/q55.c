#include<stdio.h>

int main()
{
    int i, n, slarg, larg;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array : ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    larg = slarg = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > larg)     // searching for the largest element
        {
            slarg = larg;   // assign old largest to second largest
            larg = a[i];    // assign new largest
        }
        else if(a[i] > slarg && a[i] != larg)   // searching for second largest
        {
            slarg = a[i];
        }
    }

    if(larg == slarg)
        printf("All elements are same\n");
    else
        printf("Largest element is %d and second largest element is %d\n",
               larg, slarg);

    return 0;