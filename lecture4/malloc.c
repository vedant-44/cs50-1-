
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{
  char* s=NULL;
  char* a=NULL;
  printf("s:\n");
  scanf("%s",s);
  a = malloc(strlen(s)+1);
  for(int i=0;i<strlen(s)+1;i++)
  {
    a[i]=s[i];
  }
a[0]=toupper(a[0]);
  printf("s:%s\na:%s\n",s,a);

free(a);


}

