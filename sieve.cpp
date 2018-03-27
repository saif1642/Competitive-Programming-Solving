#include<stdio.h>

int main()
{
    int prime[1000];

    int i,j;

    for(i=0;i<1000;i++)
        prime[i]=1;
    int prime_list[1000];


    for(i=2;i<=100;i++)
    {
        if(prime[i]==1)
        {
            for(j=i+i;j<=100;j=j+i)
                prime[j]=0;
        }
    }

    for(i=1,j=0;i<=100;i++)
    {
        if(prime[i]==1)
        {
            prime_list[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d\t",prime_list[i]);
        if(i%5==0)
            printf("\n");
    }


}

