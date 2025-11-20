//write a function which will accept two input parameters x,y and returns x^2+y^2 
#include <stdio.h>
int parameter(int x, int y)
{
    int sum = (x*x)+(y*y);
    return sum ;
}
void main()
{
    int x = 7;
    int y = 4;
    printf("sum is %d\n",parameter(x,y));
}
    