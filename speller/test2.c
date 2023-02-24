#include<stdio.h>
int main(void)
{
    char* dictionary="dictionaries/less";
    char word[45];
    FILE* f=fopen(dictionary,"r");

    for(int i=0;i<2;i++)
    {
      fscanf(f,"%s",word);
      printf("%s\n",word);
    }


}