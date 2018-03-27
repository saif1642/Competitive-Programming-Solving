#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    char s[10000];
    while(scanf("%d",&t)==1){
    scanf("\r");
    for(int i=0;i<t;i++)
    {

        gets(s);

        int m=strlen(s);

        int n=sqrt(m);

        if((n*n)==m)
        {
            for(int j=0;j<n;j++)
              for(int k=j;k<m;k+=n)
               printf("%c",s[k]);
        }
        else
            printf("INVALID");

        printf("\n");


    }

}

return 0;
}
