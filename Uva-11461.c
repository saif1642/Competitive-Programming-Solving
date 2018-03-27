#include<stdio.h>
#include<math.h>

int main(){

  int a,b,i;
  int count,m,flag;


  while(scanf("%d%d",&a,&b)==2){
      count=0;

      if(a==0&&b==0)
      return 0;

   for(i=a;i<=b;i++)
   {
       m=sqrt(i);

       if(m*m==i)
       {
           count++;
       }
   }
  printf("%d\n",count);

  }


}
