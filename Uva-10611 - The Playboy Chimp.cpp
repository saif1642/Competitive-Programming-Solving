#include<iostream>
#include<vector>
#include<stdio.h>
int a[50000],n;
using namespace std;
int binarysearchForLowerbound(int a[],int key){
   int begin=0,end=n-1,mid;
   int index =-1;
   while(begin<=end){
       mid=(begin+end)/2;
       if(key==a[mid]){
        index=mid;
        end=mid-1;
       }
       else if(key>a[mid]){
        begin=mid+1;
       }
       else if(key<a[mid]){
         end=mid-1;

       }
   }

return begin;
}
int binarysearchForUpperbound(int a[],int key){
   int begin=0,end=n-1,mid;
   int index =-1;
   while(begin<=end){
       mid=(begin+end)/2;
       if(key==a[mid]){
        index=mid;
        begin=mid+1;
       }
       else if(key>a[mid]){

        end=mid-1;
       }
       else if(key<a[mid]){
         begin=mid+1;

       }
   }

return end;
}

int main(){

int l_h,c_h,q;

cin>>n;

for(int i=0;i<n;i++){
    cin>>l_h;
    a[i]=l_h;
}

cin>>q;
while(q--){
    cin>>c_h;
    int ans1=binarysearchForLowerbound(a,c_h);
    int ans2=ans1-1;
    if(ans1-1>=0&&ans1-1<=n)
       cout<<a[ans1-1];
     else
        cout<<'X';
    cout<<' ';


}
}
