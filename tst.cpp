#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;

int smoke(int n,int k){
   int sum,i;
   sum=n;
   while(n<k){
     i=floor(n/k);
     sum=sum+i;
     cout<<sum;
   }

return sum;
}

int main(){

  int n,k;
  while(scanf("%d%d",&n,&k)==2){

      int res=smoke(n,k);
      //cout<<res;

  }


}

