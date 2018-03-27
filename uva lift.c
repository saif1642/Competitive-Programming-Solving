#include<stdio.h>

int main()
{
    int t,a,b,i,ans,m,anss;

    scanf("%d",&t);

        for(i=1;i<=t;i++)
        {
            scanf("%d%d",&a,&b);

            if(b==0||a==0)
            return 0;

            else if(b<=100&&b>a)
            {
                ans=(((b+1)*4)+16)-1;
                printf("Case %d: %d\n",i,ans);
            }
            else

            {
                m=(a-b);
                anss=(((a+m+1)*4)+16)-1;
                printf("Case %d: %d\n",i,anss);
            }
        }

    return 0;
}
