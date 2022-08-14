#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int n;
do
{
    n = get_int("height:");
}
while (n<1||n>8);
int y=0;
int x=n;
for(int i=0;i<=n;i++)
{
    for(int j=y;j<n;j++)
    {
        printf(" ");
    }
    for(int k=x;k<n;k++)
    {
        printf("#");
    }
    y=y+1;
    x=x-1;
    printf("\n");
    

}
}