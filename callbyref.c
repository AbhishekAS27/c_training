#include<stdio.h>
void product (int *a, int *b, int *c)
{
    int product = (*a)*(*b)*(*c);
    printf("%d",product);
}
void main()
{
int a =9;
int b =8;
int c = 2;
product(&a,&b,&c);
}
