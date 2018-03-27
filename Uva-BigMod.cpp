#include<stdio.h>
#define LL long long

LL power(LL a, LL p)
{
    int ret=1;
    while (p--)
        ret*=a;

    return ret;
}
LL bigMod(LL b, LL p, LL m)
{
    if (!p) return 1;
    else if ((p%2)==0) return power(bigMod(b,p/2,m),2)%m;
    else return (b%m * bigMod(b,p-1,m))%m;
}

int main()
{
    LL b, p, m;
    while (scanf("%lld %lld %lld",&b,&p,&m)==3)
    {
       printf("%lld\n",bigMod(b,p,m));
    }
    return 0;
}


