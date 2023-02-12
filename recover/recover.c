#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
typedef uint8_t byte;

int main(int argc, char *argv[])
{
    byte arr[512];
    bool flag=false;
    char* photo = malloc(10);
    int i=1;
    FILE* img=NULL;








    FILE *mc=fopen(argv[1],"r");

    while(fread(arr,512,1,mc)==512)
    {
        if((arr[0]!=0xff || arr[1]!=0xd8 || arr[2]!=0xff || (arr[3]&0xf0)!=0xe0) && flag==false)
        {
            continue;
        }
        if(arr[0]==0xff || arr[1]==0xd8 || arr[2]==0xff || (arr[3]&0xf0)==0xe0)
        {
            if(flag==false)
            {
                sprintf(photo,"%03i.jpg",0);
                img=fopen(photo,"w");
                fwrite(arr,512,1,img);
                flag=true;
            }
            else
            {
                fclose(img);
                sprintf(photo,"%03i.jpg",i);
                img=fopen(photo,"w");
                fwrite(arr,512,1,img);
                i++;
            }
        }
        else
        {
            img=fopen(photo,"a");
            fwrite(arr,512,1,img);
        }
    }


free(photo);






}








