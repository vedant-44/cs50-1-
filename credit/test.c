#include<stdio.h>
int main(void)
{
    int a=123;
    int b=a%10;
    a=a/10;
    int c=a%10;
    printf("%i,%i",b,c);
}