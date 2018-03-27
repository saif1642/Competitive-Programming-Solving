#include<stdio.h>

int main()
{
    int n,reminder,sum=0,i=0;
    printf("enter a integer");
    scanf("%d",&n);
    while(n!=0)
    {

        reminder=n%10;
        sum=sum+reminder;
        n=n/10;




    }
     printf("%d",sum);

   return 0;
}

