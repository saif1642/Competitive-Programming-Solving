#include <iostream>
#include <vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){

 vector<int>m;
 int n,i,res;
 while(scanf("%d",&n)==1){

    m.push_back(n);

    sort(m.begin(),m.end());

     i=m.size();

     if(i%2==0){
       printf("%d\n",((m[i/2]+m[i/2-1])/2));
     }
     else
       printf("%d\n",m[i/2]);



 }

}
