#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int a=123;
 int arr[200];
 int i=0;
 while(a>1)
 {
    arr[i]=a%10;
    a=a/10;
    i++;

 }
 for(int i=0;i<5;i++)
 {
    printf("%i\n",arr[i]);
 }
}