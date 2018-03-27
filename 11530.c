#include<stdio.h>
#include<string.h>

int main()
{   char str[110];
    int n,a1,i,j,num;
    scanf("%d",&n);
    getchar();
    for(j=1;j<=n;j++)
    {     a1=0;
        gets(str);
        num=strlen(str);
        for(i=0;i<num;i++)
        {
            if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')
            a1++;
            else if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')
            a1=a1+2;
            else if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y')
            a1=a1+3;
            else if(str[i]=='s'||str[i]=='z')
            a1=a1+4;
        }


       printf("Case #%d: %d\n",j,a1);

    }
    return 0;
}
