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
string name=argv[1];
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
      people[j].name=get_string("NAME:");

    }
    people[i].age=get_int("AGE:");
    j==2;
}


}