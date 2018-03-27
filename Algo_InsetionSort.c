#include <stdio.h>

int main()
{
    int x[100],i,n,j,k,t,m,temp;

   x[0]=-999;

   for(j=2;j<=n;j++){

    t=x[j];
    i=j-1;

    printf("(t,i) : %d %d\n\n",t,i);
    while(t<x[i]&& i>=0){
        x[i+1]=x[i];
        i--;
      printf("(x[i+1],x[i],i:%d %d %d\n",x[i+1],x[i],i);
    }
     x[i+1]=t;
 printf("(x[i+1],x[i],i:%d %d %d\n",x[i+1],x[i],i);
   }

  return 0;
}



