#include<stdio.h>

int main()
{
    int i,j;
    int arr[10];
    int arr2[10];

    for(i=0;i<10;i++){
    scanf("%d", &arr[i]);
    }
    for(i=0,j=9;i<10;i++,j--){
    arr2[j]=arr[i];

    }
       for(i=0;i<10;i++){
       arr[i]=arr2[i];

       }

    for(i=0;i<10;i++){
      printf("%d\n",arr[i]);
    }

return 0;
}
