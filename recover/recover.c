#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t byte;

int main(int argc, char *argv[])
{
    byte arr[512];
    char* photo=malloc(8);
    FILE* img=NULL;
    int counter=0;



    if(argc!=1)
    {
        return 1;
    }
    if(argv[1]==NULL)
    {
        return 2;
    }

    FILE *mc=fopen(argv[1],"r");

    while(fread(arr,512,1,mc)==1)
    {

        if((arr[0]!=0xff || arr[1]!=0xd8 || arr[2]!=0xff || (arr[3]&0xf0)!=0xe0) && counter==0)
        {
            continue;
        }
       else if(arr[0]==0xff || arr[1]==0xd8 || arr[2]==0xff || (arr[3]&0xf0)==0xe0)
        {
            if(counter !=0)
            {
                fclose(img);
            }
            sprintf(photo,"%03i.jpg",counter);
            img=fopen(photo,"w");
            fwrite(arr,1,512,img);
            counter++;
        }
        else
        {
            fwrite()
        }
    }
}














