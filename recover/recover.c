#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
typedef uint8_t byte;

int main(int argc, char *argv[])
{
    byte arr[512];
    bool flag=false;
    char* photo=malloc(8);
    int i=1;
    FILE* img=NULL;



    if(argc!=1)
    {
        return 1;
    }

    FILE *mc=fopen(argv[1],"r");

    while(fread(arr,512,1,mc)==1)
    {

    }
}














