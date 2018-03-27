#include<stdio.h>
#include<math.h>

int main()
{
     int t,i=1;
     double u,v,d,t1,t2,diff,a;

      scanf("%d",&t);

        while(t--)
        {
            scanf("%lf%lf%lf",&d,&v,&u);

            if(v>=u||v<=0||u<=0||d<=0){
                printf("Case %d: can't determine\n",i++);
                continue;

            }

            else
            {
               a=sqrt(u*u-v*v);
               t1=d/a;
               t2=d/u;
               diff=(t1-t2);
               printf("Case %d: %.3lf\n",i++,diff);

            }
        }
    return 0;
}
