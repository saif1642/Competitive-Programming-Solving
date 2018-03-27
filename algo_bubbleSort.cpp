#include <stdio.h>

int main()
{
    int arr[100],n,j,k,t,m,temp;

   //input size
    scanf("%d", &n);


    for(j=1; j<=n; j++){
        scanf("%d", &arr[j]);
    }
    k=n;

    while(k!=0){
            t=0;
        for(j=1; j<=k-1; j++){
            if(arr[j]>arr[j+1]){
                  temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                   t=j;

            }


        }

k=t;
    }


    printf("sorted array is:\n");

      for(m=1; m<=n; m++)
        printf("%d\n", arr[m]);



    return 0;
}

