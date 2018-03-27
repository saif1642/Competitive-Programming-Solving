#include<stdio.h>

int check_prime(int);
int main()
{
    int result,n;

    printf("enter a number to check prime or not\n");
    scanf("%d",&n);
    result=check_prime(n);
    if(result==1)
    printf("%d is a prime number\n",n);
    else
    printf("%d is not prime\n",n);

    return 0;
}

int check_prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
        else
        return 1;
    }
}

