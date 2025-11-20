// write a c function which will accept three parameters l,b,h and retuns volume of cube
#include <stdio.h>
int volume(int l, int b, int h)
{
    int v = l*b*h;
    return v ;
}
void main ()
{
    int l = 9;
    int b = 7;
    int h = 6;
    printf("v is %d",volume(l,b,h));
}