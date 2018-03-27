#include<stdio.h>

int main()
{
    int i,r,n;
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {

        for(r=i;r>=0;r--)
        printf("\n");
        printf("*");

    }
}
