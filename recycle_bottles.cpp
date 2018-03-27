#include<bits/stdc++.h>
using namespace std;

int main(){

 int ax,ay,bx,by,tx,ty,n,x,y;

 double A[100005],B[100005],sum=0.0;


 cin>>ax>>ay>>bx>>by>>tx>>ty>>n;

 for(int i=0;i<n;i++){
    cin>>x>>y;
    A[i]=sqrt(pow(ax-x,2)+pow(ay-y,2))+sqrt(pow(x-tx,2)+pow(y-ty,2));
    B[i]=sqrt(pow(bx-x,2)+pow(by-y,2))+sqrt(pow(x-tx,2)+pow(y-ty,2));
    ax=tx;
    ay=ty;
    bx=tx;
    by=ty;
 }

 for(int i=0;i<n;i++){
    sum=sum+min(A[i],B[i]);
 }

 cout<<sum<<endl;


}
