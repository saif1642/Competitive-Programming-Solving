#include <stdio.h>
int main()
{
  long long  n, i, flag=0;
  int t,j;
  scanf("%d",&t);

  for(j=1;j<=t;j++){

  scanf("%lld",&n);
  for(i=2;i<=;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      printf("Case %d: YES\n",j);
  else
      printf("Case %d: NO\n",j);

  }

  return 0;
}

