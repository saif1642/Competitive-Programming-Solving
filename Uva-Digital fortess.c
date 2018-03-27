#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[21][21],str[10002];
    int t;

    while(scanf("%d",&t)==1)
    {
        int l,k,m,i,j,p;
        gets(str);
        l=strlen(str);
        m=sqrt(l);
        k=m;
        if(k!=m)
        printf("INVALID\n");
        else
        {
            p=0;

            for(i=0;i<l;i++)
            {
                for(j=0;j<l;j++)
                {
                    a[i][j]=str[p];

                    p++;
                }
            }
            for(i=0;i<l;i++)
            {
                for(j=0;j<l;j++)
                {
                    printf("%c",a[j][i]);

                }

            }
            printf("\n");
        }
    }

}
