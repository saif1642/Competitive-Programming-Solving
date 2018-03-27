#include<stdio.h>

int main()
{
    int num ,a[110],c,temp,d;

    scanf("%d",&num);
    for (c = 0; c < num; c++)
    scanf("%d", &a[c]);

    for(c=0;c<(num-1);c++)
    {
        for(d=0;d<num-c-1;d++)
        {
            if(a[d]>a[d+1])
            {
                temp=a[d];
                a[d]=a[d+1];
                a[d+1]=temp;

            }
        }
    }

    for ( c = 0 ; c < num ; c++ )
     printf("%d ", a[c]);

     return 0;
}
