#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{
  char * s=get_string("s:");


 char * a = malloc(strlen(s)+1);
  for(int i=0;i<strlen(s)+1;i++)
  {
    a[i]=s[i];
  }
a[0]=toupper(a[0]);
  printf("%s\n",a);

free(a);


}

