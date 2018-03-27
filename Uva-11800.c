#include<stdio.h>
#include<math.h>

int main()

{
    long long int t,i;

    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            long long int x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,d,m,n;
            scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

            a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
            b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
            c=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
            d=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
            m=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
            n=sqrt(pow((x2-x4),2)+pow((y2-y4),2));
        if(a==b&&b==c&&c==d&&d==a)
        {
            if((a*a+b*b==m*m)&&(c*c+d*d==n*n))
            printf("Square\n");
            else
            printf("Rectangle\n");
        }



        }
    }
}
