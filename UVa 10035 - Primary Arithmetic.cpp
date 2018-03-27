#include<stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long n1,n2;

    int carry,sum,count_;

    while(scanf("%lu%lu",&n1,&n2)==2)
    {

        if(n1==0&&n2==0)
            break;

      carry = 0;count_ = 0;sum = 0;

        while((n1>0)||(n2>0))
        {
            sum=carry+(n1%10)+(n2%10);
                   //using carry for hater 1 ba somthing!!//
            if(sum>=10){

                count_++;
            }

            carry=sum/10;

            n1=n1/10;
            n2=n2/10;

        }
        if(count_==0){

              printf("No carry operation.\n");
        }

        else if(count_==1){

            printf("1 carry operation.\n");
        }



        else
        {
            printf("%d carry operations.\n",count_);
        }



    }

    return 0;

}
