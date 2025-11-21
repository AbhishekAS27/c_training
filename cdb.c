//write  a c program with a function and vardic aruments
#include<stdio.h>
#include<stdarg.h>
void result (int count, ...)
{
    int result = 0;
    va_list list;
    va_start (list,count);
    for (int i = 1; i<= count; i++)
    {
        int n = va_arg (list,int);
        result = result + n;
    }
va_end(list);
printf("%d",result);
}
void main()
{
    result(2,67,13,69);
}