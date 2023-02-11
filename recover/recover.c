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
        
    }


