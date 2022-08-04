#include<stdio.h>
#include<cs50.h>
int main(void)
{
float original price=get_float("Original price:");
int sale=get_int("sale:");
float final_ price = original price*(100-sale)/100;
printf("%2f",final price);

}
