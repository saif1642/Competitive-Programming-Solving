#include<stdio.h>

int main()
{
   int n, next, c,count,first=0,second=1;

   while(scanf("%d",&n)==1){

   for ( c = 0 ; c < n ; c++ )
   {
       count=0;
      if ( n==0 )
        return 0;
      else
      {
         next = first + second;
         first = second;
         second = next;
         count++;
      }

   }

   printf("%d\n",count);
}

   return 0;
}
