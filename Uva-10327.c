#include<stdio.h>

int main()
{
    int a[1025];

    int n,count,temp,i,j;
    while(scanf("%d",&n)==1)
    {  count=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<(n-1);i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    count++;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }


            }
        }

        printf("Minimum exchange operations : %d\n",count);
    }
}
