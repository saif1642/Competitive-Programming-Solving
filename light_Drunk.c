#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    char s1[100],s2[100],i,n,j;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            gets(s1);
            gets(s2);

          if((strcmp(s1,s2)!=0)&&s2=="wine")
          printf("YES\n");

          else
          printf("NO\n");

        }
    }
}
