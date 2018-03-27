#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    int l,p=0,i;
    while(gets(a))
    {

        l=strlen(a);

        for(i=0;i<l;i++)
        {
            if(a[i]=='"')
            {
                p=p+1;

                if(p%2==1)

                printf("``");

                else if(p%2==0)

                printf("''");
            }

            else
            printf("%c",a[i]);
        }
        printf("\n");
    }
}
