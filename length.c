#include<stdio.h>
#include<cs50.h>
int main (void)
{
    string name = get_string("name:");
    length(name);

    printf("%i\n",i);


}




int length(string name)
{
    int i=0;
    while(name[i]!='\0')
    {
     i++;
     }
     return i;
}