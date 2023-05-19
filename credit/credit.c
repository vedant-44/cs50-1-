#include <stdio.h>
#include<cs50.h>
int main(void) {
   long a=get_long("Number:");
    int arr[200];
    int j = 0;
    int sum=0;

    while (a > 0) {
        arr[j] = a % 10;
        a = a / 10;
        j++;
    }
  for(int i=1;i<j-1;i=i+2)
  {
      if(arr[i]/10<0)
      {
        sum=sum+arr[i];
      }
      else
      {
        sum=sum+arr[i]%10+arr[i]/10;
      }
  }
 for(int i=0;i<j;i=i+2)
 {
    sum=sum+arr[i];
 }
printf("%i\n",sum);

}
