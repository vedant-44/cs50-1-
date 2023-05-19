#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int a=123;
 int arr[200];
 int j=0;
 while(a>1)
 {
    arr[j]=a%10;
    a=a/10;
    j++;

 }
 for(int i=0;i<3;i++)
 {
    printf("%i\n",arr[j]);
 }
}