#include<stdio.h>

int main()
{
    int t,a,b,c,n;

    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&n);

        int d1=(b-a);
        int d2=(c-b);

        if(d1==d2)
        {
            int res=(a+((n-1)*d1));

            printf("%d\n",res);
        }
        else
            printf("ERROR\n");
    }
}

