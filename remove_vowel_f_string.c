#include<stdio.h>
#include<string.h>

int main()
{
    char line[200],line1[200];
    int v,c,d,s,i,j=0;

    v=c=d=s=0;

    printf("enter a line to count : \n");

    gets(line);

    for(i=0;line[i]!='\0';i++)
    {
        if(!(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U'))
        {
           line1[j]=line[i];
            j++;
        }
line1[j]='\0';
    }
printf("the sring is : %s\n",line1);

}
