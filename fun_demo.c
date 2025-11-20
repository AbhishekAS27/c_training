#include <stdio.h>
int myadd (int a, int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
    int a = 90;
    int b = 89;
    printf("sum is %d\n",myadd(a,b));
    int c = 34;
    int d = 24;
    printf("sum is %d\n", myadd(c,d));
}
