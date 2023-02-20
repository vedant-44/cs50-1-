#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
const int generations=3;
const int INDENT_LENGTH = 4;
typedef struct person
{
    struct person* parents[2];
    char alleles[2];
}
person* createfamily(generations);
char random_allele();
int main(void)
{
    srand(time(0));





}
person* createfamily(generations)
{
person* p=malloc(sizeof(person));
if(generations>1)
{
    p->parents[0]=createfamily(generations-1);
    p->parents[1]=createfamily(generations-1);
    bool flag == false;
    while(flag==false)
    {
        char a1=random_allele();
        char a2=random_allele();
        if(a1==p->parents[0]
    }

}
else
{
    p->parents[0]=NULL;
    p->parents[1]=NULL;
    p->alleles[0]=random_allele();
    p->alleles[1]=random_allele();

}
return p;
}



char random_allele()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)
    {
        return 'B';
    }
    else
    {
        return 'O';
    }
}
