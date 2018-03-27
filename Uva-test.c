#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000];
    int l,i,j;

    while(gets(a))
    {
        l=strlen(a);

        for(i=0;i<l;i++)
        {
            if((a[i]==' ')||(a[i]=='/0'))
            {
                for(j=i-1;j>=0;j--)
                {
                    b[j]=a[i];


                }
            }
        }
         puts(b);
    }
}
