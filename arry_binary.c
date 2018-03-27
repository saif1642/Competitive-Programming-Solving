#include<stdio.h>

int main()
{
    int arr[50],i=0,temp,n,j;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        arr[i]=temp%2;
        temp=n/2;
        i++;
    }
    for(j=i-1;j<=0;j--);

    printf("%d",arr[i]);
}
