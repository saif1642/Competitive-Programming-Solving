#include<stdio.h>
int check_prime(int);
int main(){
int i,n,prime,j,c,k;

scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=n-i;j>=0;j++)
    {
      prime=check_prime(i,j);
      if(prime==1)
      printf("%d+%d\n",i,j);
     else
     printf("not possible");

    }
}


return 0;
}
int check_prime(int a,int b)
{
    int k;
    for(k=2;k<a;k++)
    {
        if(a%k==0)
        return 0;
        else
        return 1;
    }

}
