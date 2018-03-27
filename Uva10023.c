#include<stdio.h>
#include<math.h>
    int main()
    {
      int n;
      long long int x,m;
      scanf("%d",&n);

      while(n--){
      printf("\n");
      scanf("%lld",&x);
      printf("\n");
      m=sqrt(x);
      if(x<=0)
      return 0;
     else
     printf("%lld\n",m);
      }

      return 0;
    }


