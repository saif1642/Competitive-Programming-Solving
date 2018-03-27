#include<stdio.h>
#include<math.h>

int main()
{
     double r,ans,x,n;
     while(scanf("%lf%lf",&r,&n)==2)
    {   x=2*acos(0);
        ans=(r*n*r*sin(x/2))/2;

        printf("%.3lf",ans);
    }
}
