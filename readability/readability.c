#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
int count_letters (string text);
int count_words (string text);
int count_sentences (string text);
int main(void)
{
string text =   get_string("Text:");
int letters =   count_letters(text);
int words   =   count_words(text);
int sentences = count_sentences(text);
int index = 0.0588 * letters - 0.0296 * sentences - 15.8;
int grade = round(index);

}




int count_letters (string text)
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




int count_words (string text)
{
    int l = strlen(text);
    int words = 0;
    for(int i=0 ; i<l ; i++ )
    {
        if(text[i]==32)
        {
            words = words+1;
        }

    }
     return words;
}



int count_sentences (string text)
{
  int l = strlen(text);
  int count = 0;
  for (int i=0; i<l ;i++)
  {
    if(text[i]==46 || text[i]==63 || text[i]==33)
    count = count+1;
  }
  return count;
}

