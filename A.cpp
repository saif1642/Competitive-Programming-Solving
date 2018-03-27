#include<stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;
int main(){



  int T,N,a,b,res,m,ar[20000];


 cin>>T;

 for(int i=1;i<=T;i++){
    res=0;
    cin>>N;
    for(int j=1;j<=N-1;j++){

        cin>>a>>b;
        m=a-b;
        res=res+m;
        ar[j]=res;
    }

  cout <<"Case "<<i<<":"<<*std::max_element(ar,ar+N)<< '\n';

 }




}
