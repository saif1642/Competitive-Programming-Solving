#include <stdio.h>
int main()
{
    int i,t,a,b,c,result;

    scanf("%d",&t);

    for(i=1;i<=t;i++)

        { scanf("%d %d %d",&a,&b,&c);

         result=((b-1+c)%a)+1;

          printf("Case %d: %d\n",i,result);

        }


return 0;


}
