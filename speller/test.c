#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"

const char* dictionary1="dictionaries/small";
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;


const unsigned int N = 26;


node *table[N];
int main(void)
{

bool flag=load(dictionary1);
}


bool load(const char* dictionary)
{
    char string[50];
    FILE* f=fopen(dictionary,"r");
  while(fscanf(f,"%s",string)!=EOF)
  {
    unsigned int index=hash(word);
  }
}


unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}