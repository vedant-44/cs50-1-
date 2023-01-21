#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{

    char* a= get_string("a:");
    char* b= malloc(strlen(a)+1);
    int n= strlen(a);
    for(int i=0;i<=n;i++)
    {
        b[i]=a[i];
    }
    b[0] = toupper(b[0]);
    printf("a:%s\nb:%s\n",a,b);

}