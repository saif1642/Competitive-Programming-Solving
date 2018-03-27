#include<stdio.h>
#include<iostream>
#define ll long long int
using namespace std;

int main(){


  ll n,t,sum1=0,sum2=0;

  char a;

   cin>>t;


for(int i=1;i<=t;i++){

    cin>>a>>n;

    if(a=='-'){
       sum1++;
    }
    else if(a=='+'){
        sum2++;
    }


  }

  if(sum1==sum2){
        cout<<sum1<<endl;
  }

  else if(sum1>sum2){
    cout<<sum1-sum2<<endl;
  }
   else if(sum2>sum1){
    cout<<sum2-sum1<<endl;
  }
  else if(sum1==0){
    cout<<0<<endl;
  }
  else if(sum2==0){
    cout<<sum1<<endl;
  }






}
