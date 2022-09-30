#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (void)
{
  string word = get_string("word:");
  int length = strlen(word);
  printf("%i",length);
}