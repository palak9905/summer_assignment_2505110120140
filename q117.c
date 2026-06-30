#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student s[100];
    int n=0,choice,i,roll,found;

    do
    {
        printf("\n====STUDENT RECORD SYSTEM====\n");
        printf("1.Add student\n");
        printf("2.Display all students\n");
        printf("3.Search student by Roll number\n");
        printf("4.Update student record\n");
        printf("5.Delete second record\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter roll number: ");
            scanf("%d",&s[n].roll);

            printf("Enter name: ");
            scanf("%[^\n]",s[n].name);

            printf("Enter marks: ");
            scanf("%f",&s[n].marks);

            n++;
            printf("Student record added successfully!\n");
            break;

            case 2:
            if(n==0)
            {
                printf("No record found\n");
            }
            else
            {
                printf("\n----Students record----\n");
                for(i=0;i<n;i++)
                {
                    printf("\nStudent %d\n",i+1);
                    printf("Roll number :%d\n",s[i].roll);
                    printf("Name         :%s\n",s[i].name);
                    printf("Marks         :%.2f\n",s[i].marks);
                }
            }
            break;

            case 3:
            printf("Enter roll number to search: ");
            scanf("%d",&roll);

            found=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll==roll)
                {
                    printf("\nRecord found\n");
                    printf("Roll number  :%d\n",s[i].roll);
                    printf("Name          :%s\n",s[i].name);
                    printf("Marks          :%.2f]\n",s[i].marks);
                    found =1;
                    break;
                }
            }
            if(found==0)
            printf("Record not found\n");
            break;

            case 5:
            printf("Enter roll number to delete: ");
            scanf("%d",&roll);

            found=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll=roll)
                {
                    int j;
                    for(j=1;j<n-1;j++)
                    {
                        s[j]=s[j+1];
                    }
                    n--;
                    printf("Record deleted successfully\n");
                    found=1;
                    break;
                }
            }
            if(found==0)
            printf("Record not found\n");
            break;

            case 6:
            printf("Exiting program..\n");
            break;

            default:
            printf("Invalid choice\n");

        }
    } while (choice!=6);
    return 0;
    
}