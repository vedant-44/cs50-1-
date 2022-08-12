#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int n;
    do
    {
     n = get_int("height:");
    }
    while(n<1 || n>8);
int y=0;
int x =n;
for(int i=0;i<=n;i++)
{
     for(int k=y;k<n;k++)
    {
        printf(" ");
    }
    for(int j=x;j<n;j=j+1)
    {
        printf("#");
    }

x=x-1;
y=y+1;
printf("\n");
}
}