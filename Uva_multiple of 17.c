#include<stdio.h>

int main()
{
    long long int n;

    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        return 0;
        if((n%17)==0)
        {
            printf("1\n");
        }
        else
        printf("0\n");
    }

    return 0;
}
