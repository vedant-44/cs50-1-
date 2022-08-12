#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int n = get_int("height:");

int x =n;
for(int i=0;i<=n;i++)
{
    for(int j=x;j<n;j=j+1)
    {
        printf("#");
    }
x=x-1;
printf("\n");
}
}