#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i,ch;
    printf("Enter string: ");
    scanf("%s",str);

    printf("1.length\n2.uppercase\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Length =%lu",strlen(str));
        break;
        case 2:
        for(i=0;str[i]!='\0';i++)
        {
            str[i]=toupper(str[i]);
        }
        printf("uppercase =%s",str);
        break;
        default:
        printf("Invalid choice");
    }
    return 0;
}