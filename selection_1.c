#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,a,m;

    while(scanf("%d",&t)==1){

    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);

        if(a<=0)
            return 0;
        else{

            m=a-1;

            printf("%d\n",m);
        }
    }
}

}
