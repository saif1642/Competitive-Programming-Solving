#include<stdio.h>
#include<string.h>

#include<iostream>
using namespace std;
int sumDigit(int t)
{
    int rem,s=0;

        while (t!=0)
       {
         rem=t%10;
         s=s+rem;
         t=t/10;
       }

    if(s>9)
        sumDigit(s);
   else
    return s;
}

int getnumber(char str[]){

    int sum=0,m;
    int l=strlen(str);
  for(int i=0;i<l;i++){

    if (str[i]>='A'&&str[i]<='Z'){
        int m=str[i]-64;
        sum+=m;
    }
    else if(str[i]>='a'&&str[i]<='z'){
        int n=str[i]-96;
        sum+=n;
    }
  }

return sum;

}
int main(){



 char str1[50],str2[50];

 while(gets(str1)){
        gets(str2);

     int a,b;

    a=getnumber(str1);
    b=getnumber(str2);
    int s1=sumDigit(a);
    int s2=sumDigit(b);
     float s;
   if(s1>s2)
        s=(float)s2*100/(float)s1;
   else
       s=(float)s1*100/(float)s2;
    printf("%.2f %%\n",s);
 }



}

