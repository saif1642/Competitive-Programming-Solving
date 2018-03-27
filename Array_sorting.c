#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

   int a[10][10],a2[110];

   int i,j,m,n,swap;

   for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    {
        a[i][j]=rand()%100;
    }
     m=0;
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    {
        a2[m]=a[i][j];
        m++;
    }

    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        if(a2[j]>a2[j+1])
        {
            swap=a2[j];
            a2[j]=a2[j+1];
            a2[j+1]=swap;
        }
    }

    m=0;
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    {
        a[i][j]=a2[m];
        m++;
    }
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    {
        printf("%d\t",a[i][j]);
    }

    return 0;

}











