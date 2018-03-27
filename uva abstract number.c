#include<stdio.h>
#include<string.h>

int main()
{
    char num1[50],num2[50],con1[50],con2[50];

    int t,l1,l2,a=0,b=0,i,k;

    while(scanf("%d",&t)==1){
     for(k=0;k<=t;t++){
        getchar();
        gets(num1);
        gets(num2);

        l1=strlen(num1);
        l2=strlen(num2);
        if(l1!=l2)
            printf("No\n");

        else
        {
            for(i=0;i<l1;i++)
            {
                if(!(num1[i]=='a'||num1[i]=='e'||num1[i]=='i'||num1[i]=='o'||num1[i]=='u'))
                {
                    con1[a]=num1[i];
                    a++;
                }


              else if(!(num2[i]=='a'||num2[i]=='e'||num2[i]=='i'||num2[i]=='o'||num2[i]=='u'))
                {
                    con2[b]=num2[i];
                    b++;
                }
            }
            con1[a]=' ';
            con2[b]=' ';

          if(strcmp(con1,con2)!=0)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");

        }



    }

    }

    }

