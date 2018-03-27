#include<stdio.h>

int main()
{
    int i,n,line,space=1;

    printf("enter the number of rows");
    scanf("%d",&n);
    space=n-1;
    for(line=1;line<=n;line++)
    {
        for(i=1;i<=space;i++)
        printf(" ");

        space--;
        for(i=1;i<=2*line-1;i++)
        printf("*");
        printf("\n");

    }
}
