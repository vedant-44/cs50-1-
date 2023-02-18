#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    typedef struct node
    {
        int number;
        struct node* next;
    }
    node;
    node* list=NULL;
    for(int i=1;i<argc;i++)
    {

        node* n=malloc(sizeof(node));
        n->number=atoi(argv[i]);
        n->next=list;
        list=n;
    }
    node* ptr=list;
    node* ptr2=NULL;
    while(ptr!=NULL)
    {
      printf("%i\n",ptr->number);
      ptr2=ptr;
      ptr=ptr->next;

    }

}