#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
  for(int i=0;i<height;i++)
  {
    for(int j=0;j<width;j++)
    {
        int average = (image[i][j].rgbtRed + image[i][j].rgbtBlue+ image[i][j].rgbtGreen)/3;
        image[i][j].rgbtRed=average;
        image[i][j].rgbtBlue=average;
        image[i][j].rgbtGreen=average;
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
         int sr= 0.393*image[i][j].rgbtRed+0.769*image[i][j].rgbtGreen+0.189*image[i][j].rgbtBlue;
         int sg= 0.349*image[i][j].rgbtRed+0.686*image[i][j].rgbtGreen+0.168*image[i][j].rgbtBlue;
         int sb= 0.272*image[i][j].rgbtRed+0.534*image[i][j].rgbtGreen+0.131*image[i][j].rgbtBlue;
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
    int l=0;
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            if(k<=0)
            {
                break;
            }
            else
            {
            image[i][j].rgbtRed=image[i][j+k].rgbtRed;
            image[i][j].rgbtBlue=image[i][j+k].rgbtBlue;
            image[i][j].rgbtGreen=image[i][j+k].rgbtGreen;
            k=k-2;
            }

        }
    }
}
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
