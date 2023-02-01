#include<stdio.h>
int main(void)
{
  typedef struct
  {
    char arr[10];
    int age[10];
  }
person;
person people;
people.arr[0]='a';
printf("%c\n",people.arr[0]);



}
