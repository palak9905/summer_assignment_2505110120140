#include <stdio.h>
int main()
{
    char name[50];
    int qty;
    float price,total;
    printf("Enter product name: ");
    scanf("%s",&name);
    printf("Enter quantity: ");
    scanf("%d",&qty);
    printf("Enter price");
    scanf("%f",&price);
    total=qty*price;
    printf("\nproduct: %s",name);
    printf("\nquantity :%d",qty);
    printf("\nprice :%.2f",price);
    printf("\ntotal amount: %.2f",total);
    return 0;
}