#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
#include <ctype.h>
#include<stdlib.h>
#include <algorithm>
using namespace std;

int main(){

    int t,cnt1=1,l,m,i,j;
    char s1[150],s2[150],s3[150],s4[150];

    scanf("%d",&t);

    getchar();

    while(t--){


     gets(s1);
     gets(s2);
     l=0;m=0;
    int l1=strlen(s1);
    for( i=0;i<l1;i++){

         if(s1[i]==' ')
            continue;
        else if((s1[i]>='a'&&s1[i]<='z')){
            s3[l++]=s1[i];
        }
        else if((s1[i]>='A'&&s1[i]<='Z')){
            s1[i]=s1[i]+32;
            s3[l++]=s1[i];

        }

    }
    s3[l]='\0';
       // getchar();
         int l2=strlen(s2);

        for( j=0;j<l2;j++){

        if(s2[j]==' ')
            continue;
        else if((s2[j]>='a'&&s2[j]<='z')){
            s4[m++]=s2[j];
        }
        else if((s2[j]>='A'&&s2[j]<='Z')){
             s2[j]=s2[j]+32;
             s4[m++]=s2[j];

        }



    }
    s4[m]='\0';


    int length1=strlen(s3);
    int length2=strlen(s4);
    if(length1!=length2)
         printf("Case %d: No\n",cnt1++);
    else{

        sort(s3, s3 + length1);
        sort(s4, s4 + length2);

      if (strcmp(s3,s4)==0)
        printf("Case %d: Yes\n",cnt1++);
      else
        printf("Case %d: No\n",cnt1++);




    }


    }


    return 0;
}
