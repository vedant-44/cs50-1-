#include<stdio.h>
#include<cs50.h>
int main(void)
{
float original =get_float("Original price:");
int sale=get_int("sale:");
float final  = original*(100-sale)/100;
printf("%2f\n",final );

}
