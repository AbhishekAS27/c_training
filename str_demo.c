#include <stdio.h>
#include <string.h>
void main()
{
    //create
    char name [10] = "hemashree";
    char new [100] = "hello";
    //access
    printf("%c\n",name[8]);
    //length
    printf("length of string is %d\n", strlen(name));
    //concatenation 
    strcat(new,name); // = hello + hemashree
    printf("%s",new);
    //search for a char in string!
    printf("%zs", strstr(new, "h"));
}