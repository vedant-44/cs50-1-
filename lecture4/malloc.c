
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(void)
{
  char* s,a = NULL;
  printf("s:\n");
  scanf("%s",s);
  a = malloc(strlen(s)+1);
  *a=*s;
  a[0]=toupper(a[0]);
  printf("s:%s\na:%s\n",s,a);




}

