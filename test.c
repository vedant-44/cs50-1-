#include<stdio.h>
void change(int arr[]);

int main(void)
{
      int arr[]={1,2,3};
      change(arr);
      for(int i=0;i<3;i++)
      {
        printf("%i\n",arr[i]);
      }
}
void change(int arr[])
{
    arr[0]=3;
    arr[1]=2;
    arr[2]=1;
}