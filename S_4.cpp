#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1){
    if(n==0)
    return 0;
    if(n==1)
        printf("1\n");
    else if(n==2)
        printf("2\n");
    else if((n%2)==1)

        printf("%d\n",n*(n-1)*(n-2));
    else
    {
        if(n%3==0)
            printf("%d\n",(n-1)*(n-2)*(n-3));
        else
            printf("%d\n",n*(n-1)*(n-3));
    }
}
    return 0;
}
