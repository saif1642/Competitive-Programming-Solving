#include<stdio.h>
int main()
{
    long long int t,size,c,i,maximum;
    long long int array[10010];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%lld",&size);
       for (c = 0; c < size; c++)
       scanf("%lld", &array[c]);

    maximum = array[0];

   for (c = 1; c < size; c++)
  {
      if (array[c] > maximum)
      {
        maximum  = array[c];
      }
  }
  printf("Case %lld: %lld\n",i,maximum);
    }
}
