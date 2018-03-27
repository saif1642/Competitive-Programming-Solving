#include<stdio.h>
#include<math.h>


long long int check_prime(long long int);

int main()
{
    long long int result,n,c;
    long long int t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
    scanf("%lld",&n);
    if(n==2)
    printf("Case %lld: YES\n",i);
    else
    {
        result=check_prime(n);
     if(result==1)
     printf("Case %lld: YES\n",i);
     else
     printf("Case %lld: NO\n",i);

    }

}



    return 0;
}

long long int check_prime(long long int x)
{
   long long  int i,a;
   long long int m;
   a=x;
   m=sqrt(a);

    for(i=2;i<=m;i++)
    {
        if(a%i==0)
        return 0;
        else
        return 1;
    }
}


