#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"

const char* dictionary1="dictionaries/large";
unsigned long int counter=0;
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;


const unsigned int N =700;


node *table[N];
int main(void)
{

bool flag=load(dictionary1);
printf("%i\n",flag);
printf("%ld\n",counter);

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
    if(n==NULL)
    return false;
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
    return word[0]-'a';
}