#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};
int main()
{
    struct Employee emp[100];
    int n=0,choice,id,i,found;

    do
    {
        printf("\n====EMPLOYEE MANAGEMENT SYSTEM====\n");
        printf("1.Add Employee\n");
        printf("2.Display all employee\n");
        printf("3.Search employee\n");
        printf("4.Update employee\n");
        printf("5.Delete employee\n");
        printf("6.Exit\n");

        switch(choice)
        {
      case 1:
        printf("Enter employee ID: ");
        scanf("%d",&emp[n].id);

        printf("Enter employee name: ");
        scanf("[^\n]",emp[n].name);

        printf("Enter department: ");
        scanf("[^\n]",emp[n].department);

        printf("Enter salary: ");
        scanf("%f",&emp[n].salary);

        n++;
        printf("Employee added successfully\n");
        break;

        case 2:
        if(n==0)
        {
            printf("No employee records found\n");
        }
        else
        {
            printf("\n----Employee records----\n");
            for(i=0;i<n;i++)
            {
            printf("\nEmployee %d\n",i+1);
            printf("ID          :%d\n",emp[i].id);
            printf("Name         :%s\n",emp[i].name);
            printf("Department    :%s\n",emp[i].department);
            printf("Salary         :%.2f\n",emp[i].salary);
            }
        }
        break;

        case 3:
        printf("Enter employee ID to search: ");
        scanf("%d",&id);

        found=0;
        for(i=0;i<n;i++)
        {
            if(emp[i].id==id)
            {
                printf("\nEmployee found\n");
                printf("ID          :%d\n",emp[i].id);
                printf("Name         :%s\n",emp[i].name);
                printf("Department    :%s\n",emp[i].department);
                printf("Salary         :%.2f\n",emp[i].salary);
                found =1;
                break;
            }
        }
        if(found==0)
        printf("Employee not found\n");
        break;

        case 4:
        printf("Enter employee ID to update: ");
        scanf("%d",&id);

        found=0;
        for(i=0;i<n;i++)
        {
            if(emp[i].id==id)
            {
                printf("Enter new name: ");
                scanf("%[^\n]",emp[i].name);

                printf("Enter new department: ");
                scanf("%[^\n]",emp[i].department);

                printf("Enter new salary: ");
                scanf("%f",&emp[i].salary);

                printf("Employee record updated successfully\n");
                found=1;
                break;
            }
        }
        case 5:
        printf("Enter employee id to delete: ");
        scanf("%d",&id);

        found=0;
        for(i=0;i<n;i++)
        {
            if(emp[i].id==id)
            {
                int j;
                for(j=i;j<n-1;j++)
                {
                    emp[j]=emp[j+1];
                }
                n--;

                printf("Employee record deleted successfully\n");
                found =1;
                break;
            }
        }
        if(found==0)
        printf("Employee not found\n");
        break;

        case 6:

        printf("Exiting program\n");
        break;

        default:
        printf("Invalid choice\n");
    }
    } while (choice!=0);
    return 0;
    
}