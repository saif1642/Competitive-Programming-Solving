#include<stdio.h>
int convert(int n,int x);
int main()
{
    int t,i,a,b,result;

    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);

        printf("%d\n", convert(a,b));
   }



    }

int convert(int n,int x){

   int rem,bin=0,i=1;

   while(n!=0){

         rem=n%x;
         n=n/x;
         bin=bin+rem*i;
         i=i*10;

   }

   return bin;

}

