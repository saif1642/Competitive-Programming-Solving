#include<stdio.h>

int main(){

   int a,sum,i;
   printf("PERFECTION OUTPUT\n");

     while(scanf("%d",&a)==1)
     {
         if(a==0)
         printf("END OF OUTPUT\n");
         else{
         sum=0;
         for(i=1;i<a;i++)
         {
             if(a%i==0)
             {
                 sum=sum+i;
             }
       }
       if(sum==a)
       printf("%5d  PERFECT\n",a);
       else if(sum>a)
       printf("%5d  ABUNDANT\n",a);
       else if(sum<a)
       printf("%5d  DEFICIENT\n",a);

     }
     }
return 0;

   }






