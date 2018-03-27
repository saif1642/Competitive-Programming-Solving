#include<stdio.h>

int main()
{
    char a[100][100];
    int i,j;
    int m;

    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%s",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%s\t",a[j][i]);
        }
        //printf("\n");
    }
}
