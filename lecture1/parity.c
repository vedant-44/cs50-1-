#include<cs50.h>
#include<stdio.h>
int main(void)
{
  int n=  get_int("which number do you want to check?");
  if(n % 2 == 0)
  {
    printf("even\n");
  }
  else
  {
    prinf("odd");
  }
}