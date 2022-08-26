#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main()
{
    string word = get_string ("word:");
     int l = strlen(word);
   int i=0;
   while(i<l)
   {


        int x = word[i] - 97;




      i++;
   }

printf("%i\n",x);
}