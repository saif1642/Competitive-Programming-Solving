#include<stdio.h>
#include<string.h>
void main(){
     int count=0,i,len;
        char str[100];
        gets(str);
        len=strlen(str);
        for(i=0;i<=len;i++)
        {if(str[i]==' ')
              count++;
        }
        printf("%d\n",count+1);
}

