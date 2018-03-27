#include<stdio.h>
#include<string.h>

int main()
{
    char line[200];
    int v,c,d,s,i;

    v=c=d=s=0;

    printf("enter a line to count : \n");

    gets(line);

    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
        ++v;
        else if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
        ++c;
        else if(line[i]>='0'&&line[i]<='9')
        ++d;
        else if(line[i]==' ')
        ++s;
    }
    printf("number of vowel is %d\n",v);
    printf("number of consonant is %d\n",c);
    printf("number of digit is %d\n",d);
    printf("number of space is %d\n",s);
}
