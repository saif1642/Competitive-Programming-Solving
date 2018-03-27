#include<stdio.h>

int main()
{
    int a,sum,n,i,j;
    scanf("%d", &n);
        if(n==0)
        return 0;
    sum=0;
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        for(j=1;j<=a;j++){

         sum=sum+a;
        }
    }
    printf("\n");
   printf("%d\n",sum);


return 0;
}



