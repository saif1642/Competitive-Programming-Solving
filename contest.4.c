#include<stdio.h>

int main()
{
    int a,sum,n,i,test;
     scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
         scanf("%d",&a);
         sum=sum+a;
    }
   printf("%d\n",sum);
  }

return 0;
}


