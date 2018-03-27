#include<stdio.h>
#include<string.h>

int main(){

   int i,count,m;
   char a[1000];

   while(gets(a)){
       m=strlen(a);
       count=0;
      for(i=0;i<m;i++)
      {
          if(isalpha(a[i])){
          if(a[i]==' '||a[i]=='\0')
          {
              count++;
          }
      }
       }
    printf("%d\n",count);
   }

}

