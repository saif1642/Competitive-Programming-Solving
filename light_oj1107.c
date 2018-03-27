#include<stdio.h>

int main()
{
    int t,i,n;
    int x1,x2,y1,y2,a,b,c,k;
   scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&n);

        printf("Case %d:\n",i);
        for(k=1;k<=n;k++)
        {
            scanf("%d%d",&a,&b);

              if((a>=x1&&a<=x2)&&(b>=y1&&b<=y2))
            {

                printf("Yes\n");
             }
             else
             {
                printf("No\n");
             }

        }
    }

    return 0;
}
