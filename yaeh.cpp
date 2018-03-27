#include<stdio.h>
#include <iostream>
#include <algorithm>
#define M 1000000

int main()
{
    int n,count=0,sum=0;

    int a[M];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);

    }
      std::sort(a,a+n);

       for(int i=0;i<n;i++){

       sum=sum+i;

       if(sum<a[i]){
        count++;
        a[++i]=sum;
       }

    }


 printf("%d\n",count);



}
