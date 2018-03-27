#include<stdio.h>

int main()
{
    int a,b,c,r1,r2;

    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0)
            return 0;

        else
        {
            if((b-a)==(c-b))
            {
                r1=a+(b-a)*3;
                printf("AP %d\n",r1);
            }
            else
            {
                r2=a*(b/a)*(b/a)*(b/a);
                printf("GP %d\n",r2);

            }

        }
    }
}
