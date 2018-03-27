#include<stdio.h>

int main()
{
    int t,i;

    int a,b;



   while(scanf("%d",&t)==1)
    {
       for(i=1;i<=t;i++)
   {
       scanf("%d %d",&a,&b);
       if((a<=10)&&(b<=10))
       printf("Case %d: %d\n",i,a+b);
   }
   break;

    }
    return 0;
}
