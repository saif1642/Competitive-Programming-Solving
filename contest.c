#include<stdio.h>

int main()
{
    int a,b,sum;
   while(scanf("%d%d",&a,&b)==2)
{
    if(a!=0&&b!=0)
       {
           sum=a+b;
          printf("%d",sum);
          printf("\n");
       }
    else
    printf(" ");
}




return 0;
}
