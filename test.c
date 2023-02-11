#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
int main(void)
{
    char* photo=malloc(5);
    int i=0;
    if(true)
    {
        sprintf(photo,"%03i.jpeg",i);
        FILE* img=fopen(photo,"w");
        fprintf(img,"%s",name);
    }
}