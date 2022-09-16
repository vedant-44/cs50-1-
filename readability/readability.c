#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int compute_letters (string text);
int main(void)
{
string text = get_string("Text:");
int letters = compute_letters(text);
printf("%i\n",letters);
}










int compute_letters (string text)
{
    int l = strlen(text);
    int letters = 0;
    for(int i=0;i<l;i++)
    {
        if(text[i]>='a' && text[i]<='z')
        letters = letters+1;
        else if(text[i]>'A' && text[i]<'Z')
        letters = letters+1;
    }
 return letters;
}