#include <stdio.h>
void main()
{
    int arr[4]= {40,56,58,67};
    int *p = arr;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}
