#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int cents= get_int("cents:");
    int x;
    x=cents%25;
    int y;
    y=cents-x/25;

    printf("%i\n",y);
}