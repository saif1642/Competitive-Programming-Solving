#include<stdio.h>

int main()
{
    long long int y;

    while(scanf("%lld",&y)==1)
    {
        if(y>=2000)
        {
            if(((y%4)==0&&(y%100)!=0)||(y%400)==0)
            {
                printf("This is a leap year.\n");
                if((y%15)==0)
                printf("This is huluculu festival year.\n");
                if((y%55)==0)
                printf("This is bulukulu festival year.\n");


            }


            else if((y%15)==0)
            printf("This is huluculu festival year.\n");
            else if((y%55)==0)
            printf("This is bulukulu festival year.\n");
            else
            printf("This is a ordinary year.\n");

        }
    }
}
