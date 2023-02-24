#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"


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
char* dictionary="dictionaries/small";
FILE* f=fopen(dictionary,"r");
}


bool load(const char* dictionary)
{
    char word[50];
  while(fscanf(f,"%s",word)!=EOF)
  {
    
  }
}


unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}