#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    if(n==1)
    printf("");
    else{
          if(n%2==1)
          printf("%d",3*n+1);

          else
          printf(" %d",n/2);
    }
}
