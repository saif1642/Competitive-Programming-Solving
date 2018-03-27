#include<stdio.h>

int compsum(void);

int main(void)
{
  int times,count,sum;

  printf("How many computation\n");
  scanf("%d",&times);

  count=1;
  while(count<=times){

  printf("calculation %d:,count\n");

  sum=compsum();
  printf("The sum is %d.");

  count=count+1;

  return 0;

  }
}

int compsum(void)
{
   int term1,intrvl,n_o_trms;
   int trmlst,sum;

   printf("Enter the first term:\n");
   scanf("%d",&term1);

   printf("Enter the interval:\n");
   scanf("%d",& intrvl);

   printf("Enter the number of term:\n");
   scanf("%d",& n_o_trms);

   printf("Enter the last term:\n");
   scanf("%d",&trmlst);

   trmlst=term1+(n_o_trms-1)*intrvl;

   sum=((term1+trmlst)*n_o_trms)/2;

}
