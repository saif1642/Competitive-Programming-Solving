#include<stdio.h>

int main()
{
    int a,b,c,t,total,i,m;
    scanf("%d",&t);
   for(i=1;i<=t;i++)
    {   m=0;
        scanf("%d%d%d",&a,&b,&c);
        total=a+b;
       while(total>=c)
       {
           total=total-c+1;
           m++;
       }
    printf("%d\n",m);
    }
    return 0;
}
