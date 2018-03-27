#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10],r,c,temp,m,i;

    for(r=0;r<10;r++)
        for(c=0;c<10;c++)
            a[r][c]=rand()%100;

    for(r=0;r<10;r++)
    {
        for(i=0;i<10;i++)
        {
            for(c=i+1;c<10;++c)
            {
                if(a[i][r] > a[c][r])
                {
                    int temp= a[i][r];
                    a[i][r] = a[c][r];
                    a[c][r] = temp;
                }
            }
        }
    }

    for(r=0;r<10;r++)
        for(c=0;c<10;c++)
            printf("%d\t",a[r][c]);

}
