#include<stdio.h>

int main(){

  int a1,a2,c,d,e,f,g;
  int t,i,test,total;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
      scanf("%d%d%d%d%d%d%d",&a1,&a2,&c,&d,&e,&f,&g);
      if(e>=f&&g>=f)
      {
          test=((e+g)/2);
      }
      else if(f>=g&&e>=g)
      {
          test=((e+f)/2);
      }
      else
      {
          test=((g+f)/2);
      }

    total=a1+a2+c+d+test;

    if(total>=90)
    printf("Case %d: A\n",i);
    else if(total>=80&&total<90)
    printf("Case %d: B\n",i);
    else if(total>=70&&total<80)
    printf("Case %d: C\n",i);
    else if(total>=60&&total<70)
    printf("Case %d: D\n",i);
    else
    printf("Case %d: F\n",i);
  }

return 0;

}
