#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
int main(void)
{

    int i=0;
    char* name=get_string("name:");
    if(true)
    {

        FILE* img=fopen("photo.csv","w");
        fprintf(img,"%s",name);
        fclose(img);

    }
   FILE* img=fopen("photo.csv","a");
    fprintf(img,"\nabhinav");

}
 if((arr[0]!=0xff || arr[1]!=0xd8 || arr[2]!=0xff || (arr[3]&0xf0)!=0xe0) && flag==false)
        {
            continue;
        }



       else if(arr[0]==0xff || arr[1]==0xd8 || arr[2]==0xff || (arr[3]&0xf0)==0xe0)
        {
          sprintf(photo,"%03i.jpg",i);
          FILE* img=fopen(photo,"w");
          fwrite(arr,1,512,img);
          i++;
          flag =true;
        }
        else
        {
            FILE* img=fopen(photo,"a");
            fwrite(arr,1,512,img);
        }


    }
free(photo);



}