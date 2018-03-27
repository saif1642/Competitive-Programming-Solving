#include<stdio.h>
#include<math.h>
int binary_octal(int);
int octal_binary(int);
int main()
{
    int n,x;
    printf("enter a number to convert binary to octal : \n ");
    scanf("%d",&n);
    printf("enter a number to convert octal to binary : \n ");
    scanf("%d",&x);
    printf("the octal of %d is : %d \n",n,binary_octal(n));
    printf("the binary of %d is : %d \n",x,octal_binary(x));

}
int binary_octal(int n)
{
    int rem,deci=0,i=0,octal=0;


    while(n!=0){

    rem=n%10;
    deci=deci+rem*pow(2,i);
    n=n/10;
    i++;

    }
    i=1;
    while(deci!=0)
    {
       octal=octal+(deci%8)*i;
       deci=deci/8;
       i=i*10;


    }


   return octal;
}
int octal_binary(int x){

   int deci=0,i=0,binary=0;

      while(x!=0)
    {
       deci=deci+(x%10)*pow(8,i);

       x=x/10;
       i++;

    }
  i=1;
  while(deci!=0)
  {

     binary=binary+(deci%2)*i;
     deci=deci/2;
     i=i*10;

  }
return binary;
}
