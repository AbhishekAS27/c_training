#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book
{
    char name [100];
    char author [100];
    int year;
};
void main()
{
    int n;
    printf("enter number of Book :");
    scanf("%d", &n);
    struct Book b[n];
    for(int i = 0; i<n; i++)
    {
        printf("enter name of Book:");
        scanf("%s", b[i].name);

        printf("enter author of BOok:");
        scanf("%s", b[i].author);

        printf("enter the year of publication: ");
        scanf("%d",&b[i].year);
    }    
}