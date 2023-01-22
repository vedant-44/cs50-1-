#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
 void swap(int a, int b);
int main(void)
{
    int x=1;
    int y=2;
    printf("%i,%i\n",x,y);
    swap(x,y);
     printf("%i,%i\n",x,y);


}
 void swap(int a, int b)
 {
   int temp= a;
   a=b;
   b=temp;
 }