
#include<stdio.h>
 int main (void)
{
typedef struct car
{
  char plate[7];
}
car_t;
car_t mycar;
mycar.plate = "CS50";
}