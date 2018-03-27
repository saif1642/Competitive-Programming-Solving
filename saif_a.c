#include<stdio.h>

int add_num(int x1,int y1)
  {
      int a,b,sum;
      printf("\n Enter two numbers",a,b);
      scanf("%d%d",&a,&b);
      sum=a+b;
     return sum;
  }

int sub_num(int x2,int y2)
  {
      int a,b,sub;
      printf("\n Enter two numbers",a,b);
      scanf("%d%d",&a,&b);
      sub=a-b;
      return sub;
  }

int multi_num(int x3,int y3)
  {
     int a,b,multi;
      printf("\n Enter two numbers",a,b);
      scanf("%d%d",&a,&b);
      multi=a*b;
      return multi;
  }
  int div_num(int x4,int y4)
  {
     int a,b,div;
      printf("\n Enter two numbers",a,b);
      scanf("%d%d",&a,&b);
      div=a/b;
      return div;
  }




main ()
{   int a,b,add;
    int sub,multi;
    float div;
    char ch;
    printf("\n!! welcome to saif991 ES+!!\n\n");
    printf("\n Please Enter a Character for calculation..\n \n if you want to add then enter 'A'\n if you want to sub then enter 'S'\nif you want to multiplication  then enter 'M'\nif you want to division then enter 'D': ");
    scanf("%c",&ch);

   switch(ch)
   {
       case 'A' :printf("\n The sum is : %d",add_num(a,b));
       break;
       case 'S' :printf("\n The subtraction is : %d",sub_num(a,b));
       break;
       case 'M' :printf("\n The Multliplication is : %d ",multi_num(a,b));
       break;
       case 'D' :printf("\n The division is : %d",div_num(a,b));
       break;
       default  :printf("\n !!wrong entry!!");
   }


}


