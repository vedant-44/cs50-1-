#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (void)
{
    int letters = get_int("letters:");
    int words = get_int("words:");
    int sentences= get_int("sentences:");
  float index = 0.0588*(letters*100/words)-0.296*(sentences*100/words);
}