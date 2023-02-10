#include "helpers.h"
#include<math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
  for(int i=0;i<height;i++)
  {
    for(int j=0;j<width;j++)
    {
        float average = (image[i][j].rgbtRed + image[i][j].rgbtBlue+ image[i][j].rgbtGreen)/3.0;
        image[i][j].rgbtRed=round(average);
        image[i][j].rgbtBlue=round(average);
        image[i][j].rgbtGreen=round(average);
    }
  }

}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
         float sr= round(0.393*image[i][j].rgbtRed+0.769*image[i][j].rgbtGreen+0.189*image[i][j].rgbtBlue);
         float sg= round(0.349*image[i][j].rgbtRed+0.686*image[i][j].rgbtGreen+0.168*image[i][j].rgbtBlue);
         float sb= round(0.272*image[i][j].rgbtRed+0.534*image[i][j].rgbtGreen+0.131*image[i][j].rgbtBlue);
         if(sr<=255)
         image[i][j].rgbtRed=sr;
         else
         image[i][j].rgbtRed=255;

          if(sb<=255)
         image[i][j].rgbtBlue=sb;
         else
         image[i][j].rgbtBlue=255;

         if(sg<=255)
         image[i][j].rgbtGreen=sg;
         else
         image[i][j].rgbtGreen=255;


        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int k = width-1;
    int l,m,n=0;
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width/2;j++)
        {


             l=image[i][j].rgbtRed;
            image[i][j].rgbtRed=image[i][width-1-j].rgbtRed;
            image[i][width-1-j].rgbtRed=l;
            m=image[i][j].rgbtBlue;
            image[i][j].rgbtBlue=image[i][width-1-j].rgbtBlue;
            image[i][width-1-j].rgbtBlue=m;
            n=image[i][j].rgbtGreen;
            image[i][j].rgbtGreen=image[i][width-1-j].rgbtGreen;
            image[i][width-1-j].rgbtGreen=n;



        }
    }
}
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE c[height][width];

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            c[i][j].rgbtRed=image[i][j].rgbtRed;
            c[i][j].rgbtBlue=image[i][j].rgbtBlue;
            c[i][j].rgbtGreen=image[i][j].rgbtGreen;
        }
    }


    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            float a1=c[i][j].rgbtRed;
            float a2=c[i][j].rgbtBlue;
            float a3=c[i][j].rgbtGreen;
            float counter=1;

             if(i-1>=0 && j-1>=0)
            {
              a1 = a1+c[i-1][j-1].rgbtRed;
              a2 = a2+c[i-1][j-1].rgbtBlue;
              a3 = a3+c[i-1][j-1].rgbtGreen;
              counter++;
            }
            if(i>=0 && j-1>=0)
            {
              a1 = a1+c[i][j-1].rgbtRed;
              a2 = a2+c[i][j-1].rgbtBlue;
              a3 = a3+c[i][j-1].rgbtGreen;
              counter++;
            }
            if(i+1<=height-1 && j-1>=0)
            {
              a1 = a1+c[i+1][j-1].rgbtRed;
              a2 = a2+c[i+1][j-1].rgbtBlue;
              a3 = a3+c[i+1][j-1].rgbtGreen;
              counter++;
            }
            if(i-1>=0 && j>=0)
            {
              a1 = a1+c[i-1][j].rgbtRed;
              a2 = a2+c[i-1][j].rgbtBlue;
              a3 = a3+c[i-1][j].rgbtGreen;
              counter++;
            }
             if(i+1<=height-1 && j>=0)
            {
              a1 = a1+c[i+1][j].rgbtRed;
              a2 = a2+c[i+1][j].rgbtBlue;
              a3 = a3+c[i+1][j].rgbtGreen;
              counter++;
            }
            if(i-1>=0 && j+1<=width-1)
            {
              a1 = a1+c[i-1][j+1].rgbtRed;
              a2 = a2+c[i-1][j+1].rgbtBlue;
              a3 = a3+c[i-1][j+1].rgbtGreen;
              counter++;
            }
            if(i>=0 && j+1<=width-1)
            {
              a1 = a1+c[i][j+1].rgbtRed;
              a2 = a2+c[i][j+1].rgbtBlue;
              a3 = a3+c[i][j+1].rgbtGreen;
              counter++;
            }
            if(i+1<=height-1 && j+10)
            {
              a1 = a1+c[i+1][j+1].rgbtRed;
              a2 = a2+c[i+1][j+1].rgbtBlue;
              a3 = a3+c[i+1][j+1].rgbtGreen;
              counter++;
            }
            image[i][j].rgbtRed = round(a1/counter);
            image[i][j].rgbtBlue = round(a2/counter);
            image[i][j].rgbtGreen = round(a3/counter);
        }
    }




}
