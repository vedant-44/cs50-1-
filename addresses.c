#include<stdio.h>
int main(void)
{
char* s="HI";
printf("%p\n",s);
printf("%p\n",&s);
printf("%s\n",s);
int k=50;
printf("%i\n",*&k);
int* a=&k;
printf("%p\n",a);
printf("%i\n",*a);
}