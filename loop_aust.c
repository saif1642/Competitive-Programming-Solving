#include<stdio.h>

main()
{
    int num1=1,i,n;
    int num2=1,number;
    printf("enter your number of terms : ",n);
    scanf("%d",&n);
    printf("%d\n%d",num1,num2);

    for(i=1;i<=n;i++)
    {
       number=num2;
       num2=num1+num2;
       num1=number;
       printf("\n%d",number);
    }
}
