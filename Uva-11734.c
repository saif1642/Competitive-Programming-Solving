#include<stdio.h>
#include<string.h>

int main()
{
    int t,j=0,i;
    int l1,l2;
    char s1[25],s2[25];
    getchar();
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++){

        scanf("%s%s",&s1,&s2);

        l1=strlen(s1);
        l2=strlen(s2);

            if((strcmp(s1,s2))==0)
            printf("yes\n");
            else if(l1==l2)
            printf("wrong Answer\n");
            else
            printf("Output Format Error\n");



        }
    }
}


