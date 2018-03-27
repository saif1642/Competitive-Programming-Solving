#include<stdio.h>
#include <math.h>
int main()
{
    int n,a,b,c,result;
    scanf("%d",&n);
        while(n--)
        {
           scanf("%d%d%d",&a,&b,&c);
           result=c*(a+(a-b))/(a+b);
           if(result<=0)
           printf("0\n");
           else
           printf("%d\n",result);
        }
    return 0;
}
