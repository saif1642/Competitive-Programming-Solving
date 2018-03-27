#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h1,m1,h2,m2,time_start,time_end,sleep;

   while (scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4){

       if(h1==0&&m1==0&&h2==0&&m2==0)
       return 0;

        if((h1<=23&&h2<=23)&&(m1<=59&&m2<=59))
        {


            time_start=(h1*60)+m1;
            time_end=(h2*60)+m2;

            sleep=abs(time_start-time_end);
            if(time_start==time_end)
            {
                sleep=1440;
            }
            else if(time_start>time_end)
            {
                sleep=1440-sleep;
            }


        }
         printf("%d\n",sleep);
    }
}
