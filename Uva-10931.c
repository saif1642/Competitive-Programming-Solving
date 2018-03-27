
#include<stdio.h>
int main()
{
    unsigned long int n;
    int i,c,b[1000],j;
    while(scanf("%lu",&n)==1)
    {
        if(n==0)
        break;
        i=0;
        while(n!=0)
        {
            b[i]=n%2;
            n/=2;
            i++;
        }
        c=0;
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",b[j]);
            if(b[j]==1)
            c++;
        }
        printf(" is %d (mod 2).\n",c);

    }
    return 0;
}
