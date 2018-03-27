#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("the times table of five is");
    for(i=1;i<=n;i++)
    {
       int times_table=5*i;

        printf("5*%d=%d\n",i,times_table);
    }

return 0;
}
