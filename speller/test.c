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
}


bool load(const char* dictionary)
{
   
}


unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}