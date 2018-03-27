#include<stdio.h>

int main()
{  char a1[1000];
   long long int a,b,sum;
   int t,i;
   scanf("%d",&t);

   for(i=1;i<=t;i++)
   {
       scanf("%lld %lld",&a,&b);

       sum=a+b;

       printf("Case %d:\n",i);
       printf("%lld + %lld = %lld\n",a,b,sum);
   }
}
