#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
 void swap(int x, int y);
 int x=1;
 int y=2;
int main(void)
{
    int x=1;
    int y=2;
    printf("%i,%i\n",x,y);
    swap(x,y);
     printf("%i,%i\n",x,y);


}
 void swap(int x, int y)
 {
   int temp= x;
   x=y;
   y=temp;
 }