#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"

const char* dictionary1="dictionaries/small";
int counter=0;
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
printf("%i\n",flag);
printf("%i\n",counter);
}


bool load(const char* dictionary)
{
    char string[50];
    unsigned int index=0;
    FILE* f=fopen(dictionary,"r");
    if(f==NULL)
    return false;
  while(fscanf(f,"%s",string)!=EOF)
  {
     index=hash(string);
    node* n=malloc(sizeof(node));
    strcpy(n->word,string);
    n->next=table[index];
    table[index]=n;
    counter++;

  }
  return true;
}


unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}