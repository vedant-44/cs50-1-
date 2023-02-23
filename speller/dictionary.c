// Implements a dictionary's functionality
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 256;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function

}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{

   FILE* d=fopen(dictionary,"r");

    if(d==NULL)
    return false;

    char* a=NULL;
    while(fscanf(d,"%s",a)!=EOF)
    {
      node* n=malloc(sizeof(node));
      if(n==NULL)
      return false;
      strcpy(n->word,a);
      n->next=NULL;
      unsigned int index=hash(a);
      n->next=table[index];
      table[index]=n;
    }
return true;

}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
