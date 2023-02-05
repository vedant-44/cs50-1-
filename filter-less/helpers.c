#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
  for(int i=0;i<height;i++)
  {
    for(int j=0;j<width;j++)
    {
        int average = (image[i][j].rgbtRed + image[i][j].rgbtBlue image[i][j].rgbtGreen)/3;
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
         image[i][j].rgbtRed=sr;
         image[i][j].rgbtBlue=sb;
         image[i][j].rgbtGreen=sg;


        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
