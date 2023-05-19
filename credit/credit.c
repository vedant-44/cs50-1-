#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int a=12345;
 int arr[200];
 while(a>1)
 {
    arr[0]=a%10;
    a=a/10;

 }
 for(int i=0;i<5;i++)
 {
    printf("%i\n",arr[i]);
 }
}