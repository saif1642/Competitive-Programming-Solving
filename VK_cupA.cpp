#include<bits/stdc++.h>

using namespace std;

int main(){

   int n,a[100],res=0,f=0,t;



   cin>>n;

   for(int i=0;i<n;i++)
       cin>>a[i];




   if(a[0]>15)
    cout<<15<<endl;

   else{
   for(int k=0;k<n-1;k++){
      int  check=a[k+1]-a[k];
      if(check>15){
         res=a[k]+15;
         f=1;
         break;
      }


   }
  if(f)
  cout<<res<<endl;
  else
  {
      if(90-a[n-1]<15)
      cout<<90<<endl;
      else
      cout<<a[n-1]+15<<endl;
  }


  }


}
