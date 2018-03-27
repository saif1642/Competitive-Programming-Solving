#include<stdio.h>

int main()
{
    int n,c,location=1,arr[100],maximum;
    printf("enter the number of terms in array: ");
    scanf("%d",&n);


    for(c=0;c<n;c++)
    {
        printf("enter your values : ");
        scanf("%d",&arr[c]);
    }

    maximum=arr[0];
    for(c=1;c<n;c++)
    {
        if(arr[c]>maximum);
        {
            maximum=arr[c];
        }


    }

    printf("the maximum value in array is   %d.\n",maximum);

    return 0;
}
