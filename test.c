#include<stdio.h>
#include<cs50.h>
#include<string.h>
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidates;
candidate candidates[9];
int preferences[100][9];
voter_count=3;
candidate_count=3;
int main (int argc,string argv[])
{
    for(int i=0;i<3;i++)
    {
        candidates[i].name=argv[i+1];
        candidates[i].votes=0;
        candidates[i].eliminated=false;
    }
    



}