#include<stdio.h>
int main()
{
    int i,n;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      char a,b,c;
      scanf("%c%c%c",a,b,c);
      printf("%d",a+b+c);

    }
return 0;
}
