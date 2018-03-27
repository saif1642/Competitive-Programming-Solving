#include<bits/stdc++.h>
using namespace std;

int main(){

  int t,n,a,b;
  cin>>t;

  while(t--){
    cin>>n;
    if(n<=10){
        cout<<0<<" "<<n<<endl;
    }
    else{
        a=n/2;
        b=n-a;
      cout<<a<<" "<<b<<endl;
    }
  }


}
