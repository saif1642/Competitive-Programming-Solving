#include<stdio.h>
#include <stdlib.h>

int main(){

int t,v1,v2,d,T,D,s1,s2;

double t1,t2,d1;
  scanf("%d",&t);

  int i=1;

  while(t--){

    scanf("%d%d%d%d",&v1,&v2,&d,&T);


    t1=(d/v1);
   t2=(d/v2);

    if(s1<=s2)
        printf("Case %d: Abir will survive\n",i);
    else
        printf("Case %d: Abir will be arrested\n",i);

        i++;

  }

  return 0;

}
