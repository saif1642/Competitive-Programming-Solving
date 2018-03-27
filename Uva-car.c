#include<stdio.h>
#include<math.h>

int main()
{
    int j=1,n;
    double a,b,c,p,q,m;
    while(scanf("%d",&n)==1)
    {

        if(n==0)
        return 0;

        if(n==1)
        {
            scanf("%lf%lf%lf",&a,&b,&c);
            p=((a+b)*c)/2;
            q=(b-a)/c;
            printf("Case %d: %.3f %.3f\n",j,p,q);
        }
        else if(n==2)
        {
            scanf("%lf%lf%lf",&a,&b,&c);
            q=(b-a)/c;
            p=((a+b)*q)/2;
            printf("Case %d: %.3f %.3f\n",j,p,q);
        }
        else if(n==3)
        {   scanf("%lf%lf%lf",&a,&b,&c);
            m=(a*a)+(2*b*c);
            p=sqrt(m);
            q=(p-a)/b;
            printf("Case %d: %.3f %.3f\n",j,p,q);
        }
        else if(n==4)
        {   scanf("%lf%lf%lf",&a,&b,&c);
            m=(a*a)-(2*b*c);
            p=sqrt(m);
            q=(a-p)/b;
            printf("Case %d: %.3f %.3f\n",j,p,q);
        }
      j++;

    }







    return 0;
}

