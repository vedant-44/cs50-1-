#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main()
{
    string word = get_string ("word:");
     int l = strlen(word);
   int i=0;
   while(i<l)
   {
    if(islower(word))
    {
        int x = word[i] - 97;

    }

     printf("%i\n",x);

   }
}