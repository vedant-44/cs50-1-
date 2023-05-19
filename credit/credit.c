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
if(sum%10 != 0)
{
    printf("Invalid\n");
}
if(arr[j-1]*10+arr[j-2]==34 || arr[j-1]*10+arr[j-2]==37)
{
    printf("AMEX\n");
}
else if(arr[j-1]==4)
{
    printf("VISA\n");
}
else if(arr[j-1]*10+arr[j-2]==51 || arr[j-1]*10+arr[j-2]==52 ||arr[j-1]*10+arr[j-2]==53 || arr[j-1]*10+arr[j-2]==54 ||  arr[j-1]*10+arr[j-2]==55)
{
    prinf("MASTERCARD\n");
}
}
