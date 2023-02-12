#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t byte;

int main(int argc, char *argv[])
{
    byte arr[512];
    char* photo=malloc(8);
    FILE* img=NULL;



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

    }
}














