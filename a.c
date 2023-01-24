#include<stdio.h>
int main(void)
{
    typedef struct
    {
        int a;
        char b;
    }
    st;
    st person[2];
    person[0].a=5;
    printf("%d",person[0].a);
}