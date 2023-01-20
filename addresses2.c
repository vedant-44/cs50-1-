#include<stdio.h>
int main(void)
{
    char* s="HI!";
    printf("%s\n",s);
    printf("%s\n",s[0]);
    printf("%s\n",*s);
    printf("%s\n",*(s+1));
    printf("%s\n",*(s+2));
    printf("%s\n",*(s+3));
}