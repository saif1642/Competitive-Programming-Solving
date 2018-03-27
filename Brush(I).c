#include<stdio.h>

int main()
{
    long long int t,i,num,tp,sum,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%lld",&num);
        for(j=0;j<num;j++)
        {
           scanf("%lld",&tp);
            if(tp>0)
            {
                sum=sum+tp;
            }
        }
        printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}
