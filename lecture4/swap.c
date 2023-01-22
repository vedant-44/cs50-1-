#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
void swap(int*a ,int*b);
int main(void)
{
    int x=1;
    int y=2;
    int* k=&x;
    int* l=&y;
    printf("%i,%i\n",x,y);
    swap(k,l);
     printf("%i,%i\n",x,y);


}
 void swap(int* a,int* b )
{
  

 }