#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (void)
{
    string word = get_string("word:");
    int l = strlen(word);
    int letters = 0;
    for(int i=0;i<l;i++)
    {
        if(96<word[i]<123)
        letters = letters+1;
    }


}