#include<stdio.h>
#include<math.h>
    int main()
    {
     long long int a,i,sum;
      while (scanf("%lld",&a)==1){

      sum=0;
      for(i=1;i<=a;i++)
      {
          sum=sum+(i*i*i);
      }
      printf("%lld\n",sum);

      }
      return 0;
    }

