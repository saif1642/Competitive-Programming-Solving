#include<stdio.h>

int main(){


  int a,b,t;
  scanf("%d",&t);
  while(t--){
  scanf("%d%d",&a,&b);

      if(a==0 && b==0)
      return 0;

      if(a==b)
      printf("=\n");
      else if(a<b)
      printf("<\n");
      else
      printf(">\n");



  }
return 0;
}
