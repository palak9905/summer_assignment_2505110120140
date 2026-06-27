#include <stdio.h>
int main()
{
    char name[50];
    int m1,m2,m3,total;
    float percentage;
    printf("Enter student name: ");
    scanf("%s",name);
    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    percentage=total/3.0;
    printf("\nname=%s\n",name);
    printf("total=%d\n",total);
    printf("percentage =%.2f\n",percentage);
    if(percentage>=40)
    {
        printf("result=pass");
    }
    else
    {
        printf("result=fail");
    }
    return 0;
}