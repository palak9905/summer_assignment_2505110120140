#include <stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct employee e;
    printf("Enter employee ID: ");
    scanf("%d",&e.id);
    printf("Enter employee name: ");
    scanf("%s",e.name);
    printf("Enter salary: ");
    scanf("%f",&e.salary);
    printf("\n employee details\n");
    printf("ID =%d\n",e.id);
    printf("name =%s\n",e.name);
    printf("Salary =%.2f\n",e.salary);

    return 0;
}