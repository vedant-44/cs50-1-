#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main (void)
{
    char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string key = get_string("key:");
    string text = get_string("plaintext:");
    int l = strlen(text);
    for(int i=0;i<l;i++)
    {
      if(text[i]>=97 && text[i]<=122)
      {
      int x = text[i]-97;
      printf("%c",key[x]);
      }
      else
      {
        printf("%c",text[i]);
      }
    }
    printf("\n");
}