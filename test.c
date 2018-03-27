#include<stdio.h>
int check(int);
main()
{
    int N,t,i;

  scanf("%d",&t);

   for(i=1;i<=t;i++){

    scanf("%d",&N);
    if(check(N))
    {
        printf("Case %d: YES\n",i);

    }

    else
    {

        printf("Case %d: NO\n",i);

    }
   }
}
int check(int n)
{
    int i=1;

    while(n>0)
    {
        n-=i;
        i+=2;
    }
    if(n==0)
        return 1;

    return 0;

}
