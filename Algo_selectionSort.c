#include <stdio.h>

int main()
{
    int x[100],i,n,j,k,t,m,temp;

   printf("Input Array Size:\n");
    scanf("%d", &n);

printf("Input Array elements:\n");
    for(i=1; i<=n; i++){
        scanf("%d", &x[i]);
    }

   for(j=n;j>=2;j--){

    t=1;
    for(k=2;k<=j;k++){

        if(x[t]<x[k]){
            t=k;//new minimum

        }
     //swap
     temp=x[j];
     x[j]=x[t];
     x[t]=temp;

    }

   }



    printf("sorted array is:\n");

      for(m=1; m<=n; m++)
        printf("%d\t", x[m]);



    return 0;
}




