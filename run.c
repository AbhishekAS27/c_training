//write a c function which will accept one input parameter or and writtens the parameter of circle declare pi value as a constant
#include <stdio.h>
float parameter(int r)
{
    const float pi = 3.14 ;
    float peri = 2 * pi * r;
return peri ;
}
void main ()
{
    int r = 5;
    printf("peri is %f",parameter(r));

}
