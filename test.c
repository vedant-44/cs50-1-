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
bool vote(int voter,int rank,string name);
int main (int argc,string argv[])
{
    for(int i=0;i<3;i++)
    {
        candidates[i].name=argv[i+1];
        candidates[i].votes=0;
        candidates[i].eliminated=false;
    }
    for(int j=0;j<3;j++);
    {
        for(int k=0;k<3;k++)
        {
            string name = get_string("Rank%i:",k+1);
            if(!vote(j,k,name))
            {
                printf("invalid vote\n");
                return 1;
            }
        }
        printf("\n");
    }
}
bool vote(int voter,int rank,string name)
{
    

}