#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int cents= get_int("cents:");

    int x=cents%25;
    int z=cents-x;
    int y=z/25;

    printf("%i\n",y);
}