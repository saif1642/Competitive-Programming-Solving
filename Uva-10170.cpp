#include<stdio.h>
#include<iostream>
using namespace std;
#define ll long long
int main(){

  ll s,d,c,m;

  while(cin>>s){
    cin>>d;
    c=0;
     m=s;
    while(1){
        c=c+m;
      if(c>=d){
        printf("%lld\n",m);
        break;

      }


        m++;

    }


  }

}
