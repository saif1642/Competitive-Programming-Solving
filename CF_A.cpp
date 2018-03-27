#include<stdio.h>
#include<cmath>
#include<iostream>
#define ll long long int
#define M 100000000
using namespace std;

long long a[10000000]

ll diff(ll a,ll b){

  return abs(a-b);

}

int main(){


  ll n,t,sum2;

   cin>>t;


for(ll i=0;i<t;i++){

    cin>>n;

    a[i]=n;

}
for(ll i=0;i<t;i++){
    if(diff(a[i],a[i+1])<diff(a[i],a[i-1]))
        printf("%lld %lld\n",diff(a[i],a[i+1]),diff(a[i],a[t]));

    else
       printf("%lld %lld\n",diff(a[i],a[i-1]),diff(a[i],a[t]));
}

}
