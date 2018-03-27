#include<stdio.h>


int main()
{
   long long int k,n,w;

   while( scanf("%lld %lld %lld",&k,&n,&w)==3)
   {


      long long int sum=0;

      for(int i=1;i<=w;i++)
      {
          sum=sum+(i*k);
      }
      long long int res;
      res=sum-n;

       if(sum<=n)
       {
           printf("0\n");
       }
       else
       {
            printf("%lld\n",res);
       }



   }

}
