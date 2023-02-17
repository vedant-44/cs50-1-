#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    typedef struct node
    {
        int number;
        node* next;
    }
    node;
    for(int i=0;i<argc-1;i++)
    {
        node* list=NULL;
        node* n=malloc(sizeof(node));
        n->number=
    }
}