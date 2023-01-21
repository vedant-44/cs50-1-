#include<stdio.h>
#include<cs50.h>
#include<string.h>
typedef struct
{
    string name;
    int age;
}
person;
int main(int argc,string argv[])
{
    person people[2];
for(int i=0;i<2;i++)
{
    for(int j=0;j<1;j++)
    {
      people[i].name=get_string("NAME:");

    }
    people[i].age=get_int("AGE:");

}
for(int k=0;k<2;k++)
{
    if(strcmp(people[k].name,argv[1])==0)
    {

        printf("FOUND\nAGE:%i\n",people[k].age);
        return 0;
    }

}
printf("NOT FOUND\n");
return 1;
}