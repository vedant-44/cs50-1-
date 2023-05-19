#include <stdio.h>
#include<cs50.h>
int main(void) {
    a=get_long("Number:");
    int arr[200];
    int j = 0;
    int sum=0;

    while (a > 0) {
        arr[j] = a % 10;
        a = a / 10;
        j++;
    }
  for(int i=j-1;i>=0;i--)
  {
    
  }



}
