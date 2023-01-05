#include<stdio.h>
#include<cs50.h>
string candidates[];
int main(int argc,string argv[])
{
    for(int i=0;i<3;i++)
    {
        argv[i+1]=candidates[i];
    }
    
}