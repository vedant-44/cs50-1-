#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int h = get_string("height:");
    mario(h);
}
void mario(int)
{
    mario(n-1);
    for(int i=0;i<n;i++)
    {
        printf("#");
    }
    printf("\n");
}