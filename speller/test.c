#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#define LENGTH 45
bool load(const char *dictionary);
unsigned int hash(const char *word);
char* dictionary1="dictionaries/small";


// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;
int counter=0;
// TODO: Choose number of buckets in hash table
const unsigned int N = 676;

// Hash table
node *table[N];
int main(void)
{
bool flag=load(dictionary1);


}



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
      counter++;
    }
return true;

}
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
     return (word[0]-'a')*26 + word[1]-'a';
}