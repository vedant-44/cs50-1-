#include <stdio.h>
#include <stdlib.h>
typedef uint8_t byte;

int main(int argc, char *argv[])
{
    if(argc<2 || argc>2)
    {
        return 1;
    }
    FILE *mc=fopen(argv[1],"r");


}