#include <stdio.h>

int main ()
{
int i,j,arr[10],n,s=0;
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    while (scanf ("%d", &arr[i] ) != EOF)
    {

        s=s+arr[j];
    }
}

printf("%d",s);

return 0;

}

