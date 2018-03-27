#include<stdio.h>

int main(){

int i,n,prime,j,c,k;

scanf("%d",&n);

for(i=3;i<n;i++)
{

   for(j=3;j<=i;j++)
   {
       if(i%j==0)
       break;
   }

   if(i==j)
   {
   prime=i;
   k=n-i;
   for(c=3;c<=k;c++)
   {
       if(k%c==0)
       break;
   }

   if(k==c)
   {
   printf("%d+%d\n",i,k);

   }

   }

}

}

