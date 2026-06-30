#include <stdio.h>

struct book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};
int main()
{
    struct book b[100];
    int n=0,choice,i,id,found;

    do
    {
        printf("\n====MINI LIBRARY SYSTEM====\n");
        printf("1. Add book\n");
        printf("2. Display all books\n");
        printf("3.Search book\n");
        printf("4. Issue book\n");
        printf("5. Return book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter book ID: ");
            scanf("%d",&b[n].id);

            printf("Enter book title: ");
            scanf("%d[^\n]",b[n].title);

            printf("Enter author name: ");
            scanf("%[^\n]",b[n].author);

            printf("Enter quantity: ");
            scanf("%d",&b[n].quantity);

            n++;
            printf("Book added successfully\n");
            break;

            case 2:
            if(n==0)
            {
                printf("No books available\n");
            }
            else
            {
                printf("\n----BOOK LIST----\n");
                for(i=0;i<n;i++)
                {
                    printf("\nBook %d\n",i+1);
                    printf("Book ID       :%d\n",b[i].id);
                    printf("Title          :%s\n",b[i].title);
                    printf("Author          :%s\n",b[i].author);
                    printf("Quantity         :%d\n",b[i].quantity);
                }
            }
            break;

            case 3:
            printf("Enter book id to search: ");
            scanf("%d",&id);

            found=0;
            for(i=0;i<n;i++)
            {
                if(b[i].id==id)
                {
                    printf("\nBook found\n");
                    printf("Book ID   :%d\n",b[i].id);
                    printf("Title      :%s\n",b[i].title);
                    printf("Author      :%s\n",b[i].author);
                    printf("Quantity     :%d\n",b[i].quantity);
                    found=1;
                    break;
                }
            }
            if(found==0)
            printf("Book not found\n");
            break;

            case 4:
            printf("Enter book id to issue: ");
            scanf("%d",&id);

            found =0;
            for(i=0;i<n;i++)
            {
                if(b[i].id==id)
                {
                    if(b[i].quantity>0)
                    {
                        b[i].quantity--;
                        printf("Book issued successfully\n");
                    }
                    else
                    {
                        printf("Book not available\n");
                    }
                    found =1;
                    break;
                }
            }
            if(found==0)
            printf("Book not found\n");
            break;

            case 5:
            printf("Enter book id to return: ");
            scanf("%d",&id);

            found =0;
            for(i=0;i<n;i++)
            {
                if(b[i].id==id)
                {
                    b[i].quantity++;
                    printf("Book returned successfully\n");
                    found =1;
                    break;
                }
            }
            if(found==0)
            printf("Book not found\n");
            break;

            case 6:
            printf("Exiting program..\n");
            break;

            default:
            printf("Invalid choice\n");


        }
    } while (choice!=0);
    return 0;
    
}