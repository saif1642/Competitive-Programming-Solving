#include<stdio.h>

int main()
{
   int term1,intrvl,n;
   int sum,trmlst;

   printf("\nEnter the first term :");
   scanf("%d",&term1);

   printf("\nEnter the interval :");
   scanf("%d",& intrvl);

   printf("\nEnter the number of term :");
   scanf("%d",& n);

   printf("\nEnter the last term :");
   scanf("%d",&trmlst);

   trmlst=term1+(n-1)*intrvl;

   sum=((term1+trmlst)*n)/2;

   printf("\nThe sum is %d",sum);

   return 0;
}
