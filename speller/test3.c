#include <stdio.h>
int main(){
   FILE *fp;
   char* dictionary="dictionaries/less";
   char buff[255];
   fp = fopen(dictionary, "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff );
   }
   fclose(fp);
}