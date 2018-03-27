#include<stdio.h>
#include<string.h>


int main()
{  int i,m,count,temp;
    char a[1000];

    while(gets(a)){
     count=0;
     temp=1;
     m=strlen(a);
     for(i=0;i<m;i++)
     {
         if((a[i]<='z' && a[i]>='a')||(a[i]<='Z' && a[i]>='A'))
         {
             if(temp==1)
             count++;
             temp=0;
         }
         else
         temp=1;
     }
     printf("%d\n",count);
    }
}
