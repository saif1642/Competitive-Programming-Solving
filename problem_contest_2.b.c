#include <stdio.h>

    int main ()
    {

    int a, b,c,test,i;
    scanf("%d",&test);

    for(i=1;i<=test;i++){

    scanf ("%d%d%d", &a, &b,&c);

    if(a==0 && b==0 && c==0)
      return 0;
    if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b))
    printf("Case %d: yes\n",i);
    else
    printf("Case %d: no\n",i);
    }
    return 0;
    }


