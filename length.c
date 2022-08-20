#include<stdio.h>
#include<cs50.h>
int length(string name);
int main (void)
{
    string name = get_string("name:");
    int l = length(name);
    printf("%i\n",l);




}




int length(string name);
 (
    int i=0;
    while(name[i]!='\0')
    {
     i++;
     }
     return i;
 )