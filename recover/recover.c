#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
typedef uint8_t byte;

int main(int argc, char *argv[])
{
    byte arr[512];
    bool flag=false;
    char* photo=malloc(100);
    int i=0;



    if(argc<2 || argc>2)
    {
        return 1;
    }

    FILE *mc=fopen(argv[1],"r");

    while(fread(arr,1,512,mc)==512)
    {
         if((arr[0]!=0xff || arr[1]!=0xd8 || arr[2]!=0xff || (arr[3]&0xf0)!=0xe0) && flag==false)
        {
            continue;
        }



       else if(arr[0]==0xff || arr[1]==0xd8 || arr[2]==0xff || (arr[3]&0xf0)==0xe0)
        {
          sprintf(photo,"%03i.jpg",i);
          FILE* img=fopen(photo,"w");
          fwrite(arr,1,512,img);
          i++;
          flag =true;
        }
        else
        {
            FILE* img=fopen(photo,"a");
            fwrite(arr,1,512,img);
        }


    }
free(photo);



}



