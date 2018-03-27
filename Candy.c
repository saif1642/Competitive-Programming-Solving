#include<stdio.h>
int main()
{
    int n, k,avg,sum,count;
    while(1)
    {
        scanf("%d",&n);

        if(n==-1)
            break;

        int a[n+1];
        sum=0;
        count=0;

        for(k=0;k<n;k++)
        {
            scanf("%d",&a[k]);
            sum=sum+a[k];
        }
            avg=sum/n;
            if(avg*n!=sum)
                printf("-1\n");
            else
            {
                for(k=0;k<n;k++)
                    if(a[k]<avg)
                        count=count+avg-a[k];
                printf("%d\n",cunt);
            }

    }
    return 0;
}
