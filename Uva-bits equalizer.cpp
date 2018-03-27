#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s[100];
int main ()
{
    int T;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%s",s);
        int i;
        int sum=0;
        double m=0,n=0;
        int l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]>='A'&&s[i]<'Z')
            {
                char c;
                c=s[i];
                switch (c)
                {
                    case 'C':
                        n=12.01;break;
                    case 'H':
                        n=1.008;break;
                    case 'O':
                        n=16.00;break;
                    case 'N':
                        n=14.01;break;
                }
                sum=0;
            }
            while(isdigit(s[i]))
            {
                sum=sum*10+s[i]-'0';
                if(!isdigit(s[i+1]))
                {
                    break;
                }
                else
                i++;
            }
            if(sum!=0)
            m+=sum*n;
            else if(s[i+1]>='A'&&s[i+1]<='Z'||i==l-1)
            m+=n;
        }
        printf("%.3f\n",m);
    }
    return 0;
}
