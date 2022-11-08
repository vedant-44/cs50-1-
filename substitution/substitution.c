#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc , string argv[])
{
    string key;
    char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    if(strlen(argv[1])<26)
    {
      printf("Key must contain 26 characters.");
      printf("\n");
      return 1;
    }

    else if (strlen(argv[1])==26)
    {
       key = argv[1];
    }
    else
    {
      printf("Usage: ./substitution key");
      return 2;

    }
    string text = get_string("Plaintext:");

    printf("ciphertext:");
    int l = strlen(text);
    for(int i=0;i<l;i++)
    {
      if(text[i]>='a' && text[i]<='z')
      {
      int x = text[i]-'a';
      printf("%c",tolower(key[x]));
      }
      else if(text[i]>='A' && text[i]<='Z')
      {
      int x = text[i]-'A';
      printf("%c",toupper(key[x]));
      }
      else
      {
        printf("%c",text[i]);
      }
    }
    printf("\n");
}