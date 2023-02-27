// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
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
const unsigned int N = 676;
unsigned long int counter=0;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    char* string=NULL;
    strcpy(string,word);
    int i=0;
    while(string[i]!='\0')
    {
        string[i]=tolower(string[i]);
        i++;
    }
    int index=hash(string);
    node* ptr=table[index];
    while(ptr!=NULL)
    {
        if(!strcmp(string,ptr->word))
        return true;
        else
        ptr=ptr->next;

    }
       return false;
       
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int l=strlen(word);

    if(l<2)
    return word[0]-'a';
    //checking for apostrophe c
    else if(word[1] !=  39)
    return (word[0]-'a')*26 + word[1]-'a';

    else
    return (word[0]-'a')*26 + word[2]-'a';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
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

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
   return counter;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
