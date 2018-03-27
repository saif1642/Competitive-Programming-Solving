#include<stdio.h>

int main()
{
    int a,b,ans;
    char c;
    getchar();
    while(scanf("%d%c%d")==3)
    {
        if(c=='/')
        {
            ans=a/b;
            printf("%d\n",ans);
        }
    }
}
