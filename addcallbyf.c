// write a c program which which will add 3 numbers and call by refference 

#include<stdio.h>
void addition(int *a, int *b, int *c)
{
    int addition = (*a)+(*b)+(*c);
    printf("%d",addition);
}
void main()
{
int a =9;
int b =8;
int c = 2;
addition(&a,&b,&c);
}
