#include<stdio.h>
int GCD(int a,int b)
{
    int c;
    while(a!=0)
    {
        c=b%a;
        b=a;
        a=c;

    }
  return b;
}
int main()
{

    int n,a,b;
    while(scanf("%d",&n)==1)
    {
        long  G=0;

        if(n==0)
        return 0;



        for(a=1;a<n;a++)
        {
            for(b=a+1;b<=n;b++)
            G+=GCD(a,b);


        }
   printf("%ld\n",G);
    }

    return 0;

}
