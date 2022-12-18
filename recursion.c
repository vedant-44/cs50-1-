include<stdio.h>
int main void
{
   int h=get_int("height:");
   draw(h);
}
void draw(int n)
{
    
  draw(n-1);
  for(int i=0;i<n;i++)
  {
     printf("#");
  }


}