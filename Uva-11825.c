#include<stdio.h>

int main()
{
    int a[15],t,i,size,max,min,avg,captain,j,a2[12];
    scanf("%d",&t);

    for(j=1;j<=t;j++)
    {
        scanf("%d",&size);
        for(i=0;i<size;i++)
        scanf("%d",&a[i]);

        max=a[0];
        for(i=0;i<size;i++)
        {
            if(a[i]>max)
            max=a[i];
        }
       min=a[0];
       for(i=0;i<size;i++)
        {
            if(a[i]<min)
            min=a[i];
        }

        avg=(max+min)/2;

        for(i=0;i<size;i++)
        {
            if(a[i]>=avg)
            {
                a2[i]=a[i];
            }
        }
       captain=a2[0];
       for(i=0;i<size;i++)
        {
            if(a[i]<min)
            min=a[i];
        }
    }
}
