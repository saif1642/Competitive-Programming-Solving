#include<stdio.h>
int main()
{
    int t,a[1020],i,k;
    float avg2,n,sum,avg;
    scanf("%d",&t);
    while(t--)
    {   avg=0;
        sum=0;
        k=0;
        scanf("%f",&n);
        for(i=0;i<n;i++){

        scanf("%d",&a[i]);
        sum=sum+a[i];
        }
       avg=sum/n;
        for(i=0;i<n;i++)
        {
           if(a[i]>avg)
           k++;
        }

       avg2=(k*100)/n;
       printf("%.3f%%\n",avg2);
    }
    return 0;
}
