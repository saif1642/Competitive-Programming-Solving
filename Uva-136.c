#include<stdio.h>

int main()

{
    long long int i,sum=0;

    for(i=1;i<=1500;i++)
    {


            if((i%2)==0||(i%3)==0||(i%5)==0)
            {
                sum=sum+i;

            }

    }
    printf("%lld\n",sum);
}


