#include<stdio.h>
void draw(int n);
int main()
{
    int h;
   printf("height");
   scanf("%d",&h);
   draw(h);
}
void draw(int n)
{
    if(n==0)
    {
      return;
    }
  draw(n-1);
  for(int i=0;i<n;i++)
  {
     printf("#");
  }


}