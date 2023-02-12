#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char* arr[10]={"vedant","abhina"};
    char* photo=malloc(100);
    FILE* img=NULL;
    for(int i=0;i<2;i++)
    {
        if(i==0)
        {
            sprintf(photo,"%03i.csv",0);
            img=fopen(photo,"w");
            fwrite(arr,7,1,img);

        }
        else
        {
            img=fopen(photo,"a");
            fwrite(arr,7,2,img);
        }

    }
free(photo);
}