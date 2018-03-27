#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double pi,r,m,n,o;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      scanf("%lf",&r);
        pi=2*acos(0);
        m=4*r*r;
        n=pi*r*r;
        o=m-n;
        printf("Case %d: %0.2lf\n",i,o);
    }

    return 0;
}
