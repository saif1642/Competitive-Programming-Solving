#include<stdio.h>

int BinarySearch(int a[],int n,int x,bool searchfirst)
{
    int low=0,high=n-1,result;

    while(low<=high)
    {
        result=-1;
        int mid=(low+high)/2;

        if(a[mid]==x)
        {
            result=mid;
            if(searchfirst)
                high = mid-1;
            else
                low=mid+1;
        }
        else if(x<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return result;
}
int main()
{
    int a[]={1,1,3,3,5,5,5,5,5,9,9,11};
    int x;

    printf("Enter a number.....\n");
    scanf("%d",&x);

    int startIndex=BinarySearch(a,12,x,true);

    if(startIndex=-1)
    {
        printf("Fuck you!!!!\n");
    }

    else
    {
         int endIndex=BinarySearch(a,12,x,false);
         printf("count of %d is %d",x,endIndex-startIndex+1);

    }
}
