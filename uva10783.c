#include<stdio.h>

int main()
{
    int t,a,b,i,j,sum;

    while(scanf("%d",&t)==1)
  {


    for(i=1;i<=t;i++){

     scanf("%d%d",&a,&b);
     sum=0;
     for(j=a;j<=b;j++)
     {

         if(a==0&&b==0)
         return 0;
         if((j%2)!=0)
         sum=sum+j;

     }
     printf("Case %d: %d\n",i,sum);
    }

  }

    return 0;
}
