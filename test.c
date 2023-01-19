#include<stdio.h>
#include<cs50.h>
#include<string.h>
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;
candidate candidates[9];
int preferences[100][9];
int voter_count=3;
int candidate_count=3;
bool vote(int voter,int rank,string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
int main (int argc,string argv[])
{
    for(int i=0;i<3;i++)
    {
        candidates[i].name=argv[i+1];
        candidates[i].votes=0;
        candidates[i].eliminated=false;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            string name = get_string("Rank%i:",j+1);
            if(!vote(i,j,name))
            {
                printf("invalid vote\n");
                return 1;
            }
        }
        printf("\n");
    }
    tabulate();
    int min = find_min();
    for(int m=0;m<3;m++)
    {
        printf("%i\n",candidates[m].votes);
    }
    print_winner();
     printf("%i\n",min);
     printf()
}
bool vote(int voter,int rank,string name)
{
    for(int l=0;l<3;l++)
    {
        if(strcmp(candidates[l].name,name)==0)
        {
            preferences[voter][rank]=l;
            return true;
        }
    }
 return false;
}
void tabulate(void)
{
int j=0;
for(int i=0;i<3;i++)
{
    while(candidates[preferences[i][j]].eliminated==true)
    j++;
    candidates[preferences[i][j]].votes++;
    j=0;
}
}
bool print_winner(void)
{
for(int i=0;i<3;i++)
{
    if(candidates[i].votes>voter_count/2)
    {
        printf("%s\n",candidates[i].name);
        return true;
    }
}
return false;
}
int find_min(void)
{
    int min=1000;
    for(int i=0;i<candidate_count;i++)
    {
        if(candidates[i].eliminated==false)
        {
            if(candidates[i].votes<=min)
            min=candidates[i].votes;

        }
    }
   return min;
}
bool is_tie(int min)
{
    for(int i=0;i<candidate_count;i++)
    {
        if(candidates[i].eliminated==false)
        {
            if(candidates[i].votes!==min)
            return false;
        }
    }
    return true;
}