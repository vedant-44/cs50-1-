#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int h = get_int("height:");
    mario(h);
}
void mario(int n)
{
    if(n<=0)
    {
        return
    }
    mario(n-1);
    for(int i=0;i<n;i++)
    {
        printf("#");
    }
    printf("\n");
}