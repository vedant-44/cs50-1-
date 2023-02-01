
#include<stdio.h>
 int main (void)
{
typedef struct car
{
  char* plate;
}
car_t;
car_t mycar;
mycar.plate = "CS50";
printf("%s",mycar.plate);
}