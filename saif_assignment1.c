#include<stdio.h>

int add_num(int x1,int y1)
  {
      int z1;
      z1=x1+y1;

     return z1;
  }

int sub_num(int x2,int y2)
  {
      int z2;
      z2=x2-y2;

     return z2;
  }

int multi_num(int x3,int y3)
  {
      int z3;
      z3=x3*y3;

     return z3;
  }



main ()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 's':int a,b,add;scanf("%d%d",&a,&b);printf("\n the sum of %d and %d is:%d",add,a,b);
        break;
        case 'r':printf("\n the subtraction of %d and %d is:%d",sub,a,b);
        break;
        case 'm':printf("\n the multiplication of %d and %d is:%d",multi,a,b);
        break;


    }

    int a,b,add,multi,sub,div;
    scanf("%d%d",&a,&b);

    add=add_num(a,b);
    sub=sub_num(a,b);
    multi=multi_num(a,b);





}

