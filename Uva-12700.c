#include<stdio.h>

int main()
{
    int n,t,a,b,w,i,j=1,num;

    scanf("%d",&n);
    while(n--)
    {   a=0;
        b=0;
        w=0;
        t=0;
        scanf("%d",&num);
        char str[11];
        scanf("%s",&str);

        for(i=0;i<num;i++)
        {
            if(str[i]=='A')
            a++;
            else if(str[i]=='B')
            b++;
            else if(str[i]=='W')
            w++;
            else if(str[i]=='T')
            t++;
        }
        if((a+b==num)&&b!=0)
        printf("Case %d: BANGLAWASH\n",j);
        else if((w+a==num)&&w!=0)
        printf("Case %d: WHITEWASH\n",j);
        else if(a==num)
        printf("Case %d: ABANDONED\n",j);
        else if(b==w)
        printf("Case %d: DRAW %d %d\n",j,b,t);
        else if(b>w)
        printf("Case %d: BANGLADESH %d - %d\n",j,b,w);
        else if(w>b)
        printf("Case %d: WWW %d - %d\n",j,w,b);


   j++;
    }
    return 0;
}
