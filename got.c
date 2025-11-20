//write a c function which will accept an array ,its size as n ,and writtens the difference between first and last element 
#include <stdio.h>
int subarr (int arr[],int n)
{
    int sub = arr[0]-arr[n-1];
    return (sub);
}
void main ()
{
    int arr[3] = {78,2,4};
    int n = 3;
    printf("%d",subarr(arr,n));
} 

