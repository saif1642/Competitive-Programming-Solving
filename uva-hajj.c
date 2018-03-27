#include<stdio.h>
#include<string.h>
int main ()
{
char a='Hajj',b='Umrah',s[6];
int count=1;
while(s!='*')
{
scanf("%c",&s);
if(s==a)
printf("Case %d: Hajj-e-Akbar\n",count);
else if(s==b)
printf("Case %d: Hajj-e-Asghar\n",count);
count++;
}
return 0;
}
