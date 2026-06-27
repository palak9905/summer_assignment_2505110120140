#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student s;
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter name: ");
    scanf("%d",s.name);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    printf("\nstudent record\n");
    printf("roll number=%d\n",s.roll);
    printf("name=%s\n",s.name);
    printf("marks = %.2f\n",s.marks);

    return 0;
}