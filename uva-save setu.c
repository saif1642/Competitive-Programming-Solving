
#include <stdio.h>
#include <string.h>

int main ()
{
    int t,acc=0,s=0;
    char a[100];
    scanf("%d",&t);
    while(t--)
     {
        scanf("%s",a);
        if(strcmp(a,"donate")==0)
        {
            scanf("%d",&s);
            acc+=s;
        }
        else
        printf("%d\n",acc);
    }

    return 0;

}

