#include<stdio.h>
int div(int x,int y);

int main()
{
    int n,a,d,ans;

    while(scanf("%d%d",&n,&a)==2)
    {

      d=div(n,a);
      ans=n+d;

      printf("%d\n",ans);

    }

}

int div(int x,int y)
{
    int m;
    int sum=0;

    m=(x/y);

    if(m<y)
    {
        sum=sum+m;
        return sum;

    }

    else
    {
        while(m>y)
        {
            m=m/y;
            sum=sum+m;
        }


    }
return sum;
}
