#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int* ptr =malloc(2*sizeof(int));
    *ptr=345;
    printf("%i\n",*ptr);
    free(ptr);
    printf("%i\n",*ptr);


}