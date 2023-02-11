#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t byte;

int main(int argc, char *argv[])
{
    byte arr[512];
    if(argc<2 || argc>2)
    {
        return 1;
    }

    FILE *mc=fopen(argv[1],"r");

    while(fread(arr,1,512,mc)==512)
    {
        while(arr[0]!=0xff || arr[1]!=0xd8 || arr[2]!=0xff || arr[3])

    }


}