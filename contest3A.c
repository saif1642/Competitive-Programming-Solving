#include<stdio.h>

int main()
{
    char a[4];
   int t,x =0;
 scanf("%d\n",&t);
 while(t--)
 {
     gets(a);
     if(a[0]=='+'|| a[1]=='+')
     x +=1;
     else
     x -=1;
}
    printf("%d",x);


return 0;
   }
