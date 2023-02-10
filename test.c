int i=0,j=0;
    for(i=0;i<height;i++)
    {
        for(j=0;j<width;j++)
        {
   if(i!=0 && i!=height-1 && j!=0 && j!=width-1)
   {
image[i][j].rgbtRed=(image[i][j].rgbtRed+image[i][j+1].rgbtRed+image[i][j-1].rgbtRed+image[i+1][j-1].rgbtRed+image[i-1][j-1].rgbtRed+image[i][j-1].rgbtRed+image[i-1][j+1].rgbtRed+image[i][j+1].rgbtRed+image[i+1][j+1].rgbtRed)/9;
image[i][j].rgbtBlue=(image[i][j].rgbtBlue+image[i][j+1].rgbtBlue+image[i][j-1].rgbtBlue+image[i+1][j-1].rgbtBlue+image[i-1][j-1].rgbtBlue+image[i][j-1].rgbtBlue+image[i-1][j+1].rgbtBlue+image[i][j+1].rgbtBlue+image[i+1][j+1].rgbtBlue)/9;
image[i][j].rgbtGreen=(image[i][j].rgbtGreen+image[i][j+1].rgbtGreen+image[i][j-1].rgbtGreen+image[i+1][j-1].rgbtGreen+image[i-1][j-1].rgbtGreen+image[i][j-1].rgbtGreen+image[i-1][j+1].rgbtGreen+image[i][j+1].rgbtGreen+image[i+1][j+1].rgbtGreen)/9;
   }