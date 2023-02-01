#include<stdio.h>
int main(void)
{

    char arr[]="abcd";
    for(int i=0;i<4;i++)
    {
        printf("Alphabet\n");
        scanf("%c",&arr[i]);
    }
    printf("%c\n",arr[0]);

}
