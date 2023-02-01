#include<stdio.h>
int main(void)
{
    char* s = NULL;
    s="abcd";
    *s[1]='k';
    printf("%c\n",s[1]);

}
