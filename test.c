#include<stdio.h>
#include<cs50.h>
string candidates[];
int main(int argc,string argv[])
{
    for(int i=0;i<3;i++)
    {
        argv[i+1]=candidates[i];
    }

}for (int i = 0; i < voter_count; i++)
    {
        int ranks[3];
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }
         printf("%s",ranks[1]);


        printf("\n");
    }