#include<stdio.h>

int main()
{
    char str[30]="fucky",str_n[30];
    int j,i;


    for(i=5,j=0;i>=0;i--)
    {
       str_n[j]=str[i];

       j=j+1;
    }
str_n[j]='\0';
printf("%s\n",str_n);



    return 0;

getchar;
}

