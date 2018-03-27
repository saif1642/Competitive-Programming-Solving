#include <stdio.h>
long  int add_digits(long int x) {
        long int reminder;
        long int sum=0,a;
        a=x;

       while(a!=0)
        { reminder=a%10;
          sum=sum+reminder;
          a=a/10;
        }
        if(x<10)
        return x;
        else{
        sum=add_digits(sum);
       return sum;}
    }

    int main()
    {
       long int n;
       long int result;

     while(scanf("%ld", &n)==1){
      if(n==0)
      return 0;
      else{
      result=add_digits(n);
      printf("%ld\n", result);
      }

    }

}

