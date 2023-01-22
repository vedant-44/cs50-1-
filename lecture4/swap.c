#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
 void swap();
int main(void)
{

    printf("%i,%i\n",x,y);
    swap(x,y);
     printf("%i,%i\n",x,y);


}
 void swap()
 {
   int temp= x;
   x=y;
   y=temp;
 }