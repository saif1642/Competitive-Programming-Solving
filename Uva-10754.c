#include<stdio.h>
#include<math.h>

int main()
{
    long int n,j=1,side;


    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        return 0;
        if(n>0){
        side=ceil((3+sqrt(9+8*n))/2);

        }
        printf("Case %ld: %ld\n",j,side);


        j++;

    }
    return 0;
}
