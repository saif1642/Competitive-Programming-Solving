#include<stdio.h>

int main()
{

    int arr[10][10],i,j;
    int n,m;
    printf("enter the value of row and column : ");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&arr[i][j]);

    printf("diagonal sum is %d\n",arr[0][0]+arr[1][1]+arr[2][2]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d\t",arr[i][j]);
        printf("\n");

    }
return 0;
}
