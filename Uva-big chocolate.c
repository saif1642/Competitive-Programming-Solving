#include<stdio.h>

int main()

{
   long long int a,b,result;

   while(scanf("%lld%lld",&a,&b)==2)
   {
        result=(a-1)+(b-1)*a;
        printf("%lld\n",result);


   }


    return 0;
}
