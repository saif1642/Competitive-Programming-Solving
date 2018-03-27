#include<stdio.h>

int main(){

  int a[2500],t,count;

  scanf("%d",&t);

    for(int k=1;k<=t;k++){

        scanf("%d",&a[k]);
    }
   count=0;
    for(int i=1;i<=t;i++){

            for(int j=2;j<=t;j++){

                if(a[i]<a[j]){

                    count++;
                    printf("%d\n\n",count);
                }


            }
        a[i]=i+count;
        count=0;

    }
 for(int k=1;k<=t;k++){

        printf("%d\t",a[k]);
    }

  }





