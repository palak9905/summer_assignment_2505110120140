#include <stdio.h>
int main()
{
    int arr[100],n,i,even=0,odd=0;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
        even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements is %d\n",even);
    printf("Number of odd elements is %d\n",odd);
    return 0;
}