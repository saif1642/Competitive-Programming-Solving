#include<stdio.h>

int main()
{
    int a,b,c,sum,n,i;
    scanf("%d",&n);


    for(i=1;i<=n;i++){
         scanf("%d%d%d",&a,&b,&c);

         if(b>a&&b<c)
         printf("Case %d: %d\n",i,b);
         else if(b>c&&b<a)
         printf("Case %d: %d\n",i,b);
         else if(a>b&&a<c)
         printf("Case %d: %d\n",i,a);
         else if(a>c&&a<b)
         printf("Case %d: %d\n",i,a);
         else if(c>a&&c<b)
         printf("Case %d: %d\n",i,c);
         else if(c>b&&c<a)
         printf("Case %d: %d\n",i,c);

    }


return 0;
}




