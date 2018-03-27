#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int t,c,d;
    char str[100],str1[100];
    int i, j,m;
    scanf("%d",&t);
    getchar();
   for(c=1;c<=t;c++){
    gets(str);
    m=strlen(str);

 for(d=0;d<m;d++)
 {


if(isalpha(str[d]))
{

  strrev(str);

}

str[d]='\0';
 }

printf("Case %d : %s\n",c, str);

}

  return 0;
   }


