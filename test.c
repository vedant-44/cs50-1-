#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (void)
{
    string word = get_string("word:");
    int l = strlen(word);
    printf("%i\n",l);

}