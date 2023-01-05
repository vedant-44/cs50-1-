#include<stdio.h>
#include<cs50.h>
#include<string.h>
bool vote(int rank,string name,int ranks[]);
string candidates[3];
int main(int argc,string argv[])
{
    for(int i=0;i<3;i++)
    {
        argv[i+1]=candidates[i];
    }

for (int i = 0; i <3; i++)
    {
        int ranks[3];
        for(int j = 0; j <3; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }
         printf("%i,%i,%i",ranks[0],ranks[1],ranks[2]);


        printf("\n");
    }
}
    bool vote(int rank,string name,int ranks[])
    {
        int l=0;
      for(int k=0;k<3;k++)
      {
        if(strcmp(name,candidates[k])!=0)
        return false;
        else if(strcmp(name,candidates[k])==0)
        {
            k=ranks[l];
        }
        l=l+1;
    }
    return true;
    }